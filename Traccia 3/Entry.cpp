#include"Entry.h"

Entry::Entry(){
	
	nome = NULL;
	cognome = NULL;
}

Entry::Entry(const char *nome,const char *cognome,const char id[5]){
	
	this->nome = new char[strlen(nome)+1];
	this->cognome = new char[strlen(cognome)+1];
	
	strcpy(this->nome,nome);
	strcpy(this->cognome,cognome);
	strcpy(this->id,id);	
}

Entry::Entry(const Entry &en){
	
	if(this == &en)
		return;
		
	nome = new char[strlen(en.nome)+1];
	strcpy(nome,en.nome);
	
	cognome = new char[strlen(en.cognome)+1];
	strcpy(cognome,en.cognome);
	
	strcpy(id,en.id);	
	
}

const Entry &Entry::operator=(Entry &en){

	if(this == &en)
		return *this;
		
	delete []nome;	
	delete []cognome;
		
	nome = new char[strlen(en.nome)+1];
	strcpy(nome,en.nome);
	
	cognome = new char[strlen(en.cognome)+1];
	strcpy(cognome,en.cognome);
	
	strcpy(id,en.id);	
	
	return *this;
	
}


Entry::~Entry(){
	delete []nome;
	delete []cognome;
}

void Entry::set_cognome(const char *cognome){
	
	delete []this->cognome;
	
	this->cognome = new char[strlen(cognome)+1];
	strcpy(this->cognome,cognome);
	
}

void Entry::set_nome(const char * nome){
	
	delete []this->nome;
		
	this->nome = new char[strlen(nome)+1];
	strcpy(this->nome,nome);
	
}


ostream &operator<<(ostream &os,const Entry &en){
	
	os<<en.get_id()<<" "<<en.get_nome()<<" "<<en.get_cognome();
	return os;
	
}

ofstream &operator<<(ofstream &of,const Entry &en){
	
	of<<en.get_id()<<" "<<en.get_nome()<<" "<<en.get_cognome();	
	return of;
}

istream &operator>>(istream &in,Entry &en){
	
	char buff[256];
	in.getline(buff,256);
	en.set_nome(buff);    
	in.ignore();
	in.getline(buff,256);
	en.set_cognome(buff);
	
	char buffid [5];
	
	in>>buffid;
	
	en.set_id(buffid);
	return in;		
	
}
