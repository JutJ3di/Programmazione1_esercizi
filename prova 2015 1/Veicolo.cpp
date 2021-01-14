#include"Veicolo.h"

Veicolo::Veicolo(){
	
	nome_tipo = NULL;
	marca = NULL;
	
}

Veicolo::Veicolo(const char *nome_t,const char *marca_t){
	
	nome_tipo = new char[strlen(nome_t)+1];
	strcpy(nome_tipo,nome_t);
	
	marca = new char[strlen(marca_t)+1];
	strcpy(marca,marca_t);
	
}

Veicolo::Veicolo(const Veicolo &ve){
	
	if(this==&ve)
		return;
	
	nome_tipo = new char[strlen(ve.nome_tipo)+1];
	strcpy(nome_tipo,ve.nome_tipo);
	
	marca = new char[strlen(ve.marca)+1];
	strcpy(marca,ve.marca);
	
}

const Veicolo &Veicolo::operator=(Veicolo &ve){

	if(this==&ve)
		return *this;
	
	if(nome_tipo)
		delete []nome_tipo;
		
	if(marca)	
		delete []marca;
		
	
	nome_tipo = new char[strlen(ve.nome_tipo)+1];
	strcpy(nome_tipo,ve.nome_tipo);
	
	marca = new char[strlen(ve.marca)+1];
	strcpy(marca,ve.marca);
	
	return *this;	
	
}

ostream &operator<<(ostream &os,const Veicolo &ve){
	
	os<<ve.nome_tipo<<" "<<ve.marca<<endl;
	return os;
	
}


istream &operator>>(istream &in,Veicolo &ve){
	
	char *buff;
	
	in>>buff;
	
	ve.nome_tipo = new char[strlen(buff)+1];
	strcpy(ve.nome_tipo,buff);
	
	buff = NULL;
	
	in>>buff;
	
	ve.marca =  new char[strlen(buff)+1];
	strcpy(ve.marca,buff);
	
	
}

ofstream &operator<<(ofstream &of,const Veicolo &ve){
	
	
	of<<ve.nome_tipo<<" "<<ve.marca<<endl;
	return of;
	
}


char  const *Veicolo::totext(){
	
	char *buff;
	
	buff = new char[strlen(nome_tipo)+1+strlen(marca)+1+1];
	strcpy(buff,strcat(nome_tipo,marca));
	
	return buff;
	
}

Veicolo::~Veicolo(){
	
	delete []nome_tipo;
	delete []marca;
	
}
