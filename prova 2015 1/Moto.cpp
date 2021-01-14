#include"Moto.h"

Moto::Moto():Veicolo(){
	
	tipo =NULL;
	
}


Moto::Moto(const char *nome_t,const char *marca_t,const char *tipo_t):Veicolo(nome_t,marca_t){
	
	tipo = new char[strlen(tipo_t)+1];
	strcpy(tipo,tipo_t);
	
}

Moto::Moto(const Moto &mo):Veicolo(mo){
	
	if(this==&mo)
		return;
	
	delete []tipo;
	
	tipo = new char[strlen(mo.tipo)+1];
	strcpy(tipo,mo.tipo);	
	
}

const Moto &Moto::operator=( Moto &mo){
	
	
	if(this==&mo)
		return *this;
	
	delete []tipo;

	Veicolo::operator=(mo);
	
	tipo = new char[strlen(mo.tipo)+1];
	strcpy(tipo,mo.tipo);	
	return *this;	
}


Moto::~Moto(){
	
	delete []tipo;
	
}



ostream &operator<<(ostream &os,const Moto &mo){
	os<<(Veicolo&)mo<<" "<<mo.tipo<<endl;
	return os;
}

istream &operator>>(istream &in,Moto &mo){
	
	in>>(Veicolo&)mo;
	
	char buff[256];
	
	in>>buff;
	mo.tipo = new char[strlen(buff)+1];
	strcpy(mo.tipo,buff);
	return in;	
	
	
}



