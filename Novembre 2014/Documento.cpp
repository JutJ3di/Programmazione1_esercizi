#include"Documento.h"

Documento::Documento(){
	
	autore = NULL;
	id = 0;
	
}

Documento::Documento(const char*autore,int id){
	
	this->autore = new char[strlen(autore)+1];
	strcpy(this->autore,autore);
	
	this->id = id;
	
}

Documento::Documento(const Documento &doc){
	
	if(this ==&doc)
		return;
		
	autore = new char[strlen(doc.autore)+1];
	strcpy(autore,doc.autore);
	
	id = doc.id;	
	
}

const Documento &Documento::operator=(Documento &doc){
	
	if(this ==&doc)
		return *this;
		
		
	delete []autore;	
	autore = new char[strlen(doc.autore)+1];
	strcpy(autore,doc.autore);
	
	id = doc.id;	
	return *this;	
	
}



void Documento::set_autore(const char *autore){
	
	delete []this->autore;
	
	this->autore = new char[strlen(autore)+1];
	strcpy(this->autore,autore);
	
}

ostream &operator<<(ostream &os,const Documento &doc){
	
	os<<doc.autore<<" "<<doc.id;
	return os;
	
}

ofstream &operator<<(ofstream &of,const Documento &doc){
	of<<doc.autore<<" "<<doc.id;
	return of;	
}

istream &operator>>(istream &in,Documento &doc){
	
	char buff[256];
	
	in.getline(buff,256);
	
	doc.set_autore(buff);
	
	in>>doc.id;
	
	return in;
}

Documento::~Documento(){
	
	delete []autore;
	
}
