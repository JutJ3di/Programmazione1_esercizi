#include"Prodotto.h"

Prodotto::Prodotto(){
	
	genere = NULL;
	costo = 0;
	
}

Prodotto::Prodotto(const char id[5],const char *genere,float costo){
	
	strcpy(this->id,id);
	
	this->genere = new char[strlen(genere)+1];
	strcpy(this->genere,genere);
	
	this->costo = costo;
	
}

Prodotto::Prodotto(const Prodotto &pro){
	
	if(this == &pro)
		return;
		
	strcpy(id,pro.id);
	
	genere = new char[strlen(pro.genere)+1];
	strcpy(genere,pro.genere);
	
	costo = pro.costo;	
	
}

const Prodotto &Prodotto::operator=(Prodotto &pro){
	
	if(this == &pro)
		return *this;
		
	strcpy(id,pro.id);
	
	delete []genere;
	genere = new char[strlen(pro.genere)+1];
	strcpy(genere,pro.genere);
	
	costo = pro.costo;	
	
	return *this;
}


float Prodotto::imposta(){
	if(id[0] =='A');
		return 0;
}

Prodotto::~Prodotto(){
	delete []genere;
}


