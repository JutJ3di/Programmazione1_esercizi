#include"Servizio.h"

Servizio::Servizio():Prodotto(){
	tipo = NULL;
}

Servizio::Servizio(const char id[5],const char *genere ,float costo,const char *tipo):Prodotto(id,genere,costo){
	
	this->tipo = new char[strlen(tipo)+1];
	strcpy(this->tipo,tipo);
	
}

Servizio::Servizio(const Servizio &ser):Prodotto(ser){
	
	if(this == &ser)
		return;
		
	tipo = new char[strlen(ser.tipo)+1];
	strcpy(tipo,ser.tipo);	
	
}


const Servizio &Servizio::operator=(Servizio &ser){
	
	if(this == &ser)
		return *this;
	
	Prodotto::operator=(ser);
	
	delete []tipo;	
	tipo = new char[strlen(ser.tipo)+1];
	strcpy(tipo,ser.tipo);	
	
	return *this;
}

float Servizio::imposta(){
	
	Prodotto::imposta();
	
	return 0.1*costo;
	
}

Servizio::~Servizio(){
	delete []tipo;
}


