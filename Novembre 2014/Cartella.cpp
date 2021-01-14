#include"Cartella.h"
Cartella::Cartella():Documento(){
	
	nome = NULL;
	cognome = NULL;
	reparto = NULL;
	
}

Cartella::Cartella(const char *autore,int id,const char *nome,const char *cognome,const char *reparto):Documento(autore,id){
	
	this->nome = new char[strlen(nome)+1];
	strcpy(this->nome,nome);
	
	this->cognome = new char[strlen(cognome)+1];
	strcpy(this->cognome,cognome);
	
	this->reparto = new char[strlen(reparto)+1];
	strcpy(this->reparto,reparto);
	
	
}

Cartella::Cartella(const Cartella &ca):Documento(ca){
	
	if(this == &ca)
		return;
		
		
	nome = new char[strlen(ca.nome)+1]	;
	strcpy(nome,ca.nome);
	
	cognome = new char[strlen(ca.cognome)+1];
	strcpy(cognome,ca.cognome);
	
	reparto = new char[strlen(ca.reparto)+1];
	strcpy(reparto,ca.reparto);
	
}


const Cartella &Cartella::operator=(Cartella &ca){
	
	
	if(this == &ca)
		return *this;
		
		
	Documento::operator=(ca);
		
	delete []nome;
	delete []cognome;
	delete []reparto;	
		
	nome = new char[strlen(ca.nome)+1]	;
	strcpy(nome,ca.nome);
	
	cognome = new char[strlen(ca.cognome)+1];
	strcpy(cognome,ca.cognome);
	
	reparto = new char[strlen(ca.reparto)+1];
	strcpy(reparto,ca.reparto);
	
	return *this;
	
}

Cartella::~Cartella(){
	
	delete []nome;
	delete []cognome;
	delete []reparto;	
	
}

void Cartella::set_nome(const char*nome){
	
	delete this->nome;
	
	this->nome = new char[strlen(nome)+1];
	strcpy(this->nome,nome);
	
}

void Cartella::set_cognome(const char *cognome){
	
	delete this->cognome;
	
	this->cognome = new char[strlen(cognome)+1];
	strcpy(this->cognome,cognome);
	
}

void Cartella::set_reparto(const char*reparto){
	
	delete []this->reparto;
	
	this->reparto = new char[strlen(reparto)+1];
	strcpy(this->reparto,reparto);
	
}

ostream &operator<<(ostream &os,const Cartella &ca){
	
	os<<(Documento&)ca<<ca.get_nome()<<" "<<ca.get_cognome()<<" "<<ca.get_reparto();
	return os;
	
}



istream &operator>>(istream &in,Cartella &ca){
	
	char buff[256];
	
	in>>(Cartella&)ca;
	
	
	in.getline(buff,256);
	
	ca.set_nome(buff);
	
	in.ignore();
	
	in.getline(buff,256);
	
	ca.set_cognome(buff);
	
	in.ignore();
	
	in.getline(buff,256);
	
	ca.set_reparto(buff);
	
	return in;
	
}

ofstream &operator<<(ofstream &of,const Cartella &ca){

	of<<(Documento&)ca<<ca.get_nome()<<" "<<ca.get_cognome()<<" "<<ca.get_reparto();
	return of;

}


