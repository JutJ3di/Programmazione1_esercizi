#include"Utente.h"

Utente::Utente():data(){
	
	cognome = NULL;
	
}

Utente::Utente(const char *cf,const char *cognome,int giorno,int mese,int anno):data(giorno,mese,anno){
	
	strcpy(this->cf,cf);
	
	this->cognome = new char[strlen(cognome)+1];
	strcpy(this->cognome,cognome);
	

}

Utente::Utente(const Utente &ute){
	
	if(this==&ute)
		return;
		
	strcpy(cf,ute.cf);
	
	cognome = new char[strlen(ute.cognome)+1];
	strcpy(cognome,ute.cognome);
	
	data = (Data&)ute;
	
}


const Utente &Utente::operator=(Utente &ute){
	
	if(this==&ute)
		return *this;
		
	strcpy(cf,ute.cf);
	
	delete []cognome;
	cognome = new char[strlen(ute.cognome)+1];
	strcpy(cognome,ute.cognome);
	
	data = ute.data;	
	
	return *this;
}


Utente::~Utente(){
	delete []cognome;
}

ostream &operator<<(ostream &os,const Utente &ute){
	
	os<<ute.cf<<" "<<ute.cognome<<" "<<ute.data;
	return os;
}

istream &operator>>(istream &in,Utente &ute){
	
	in>>ute.cf;
	char cognome[256];
	
	in.getline(cognome,256);
	
	
	ute.cognome = new char[strlen(cognome)+1];
	strcpy(ute.cognome,cognome);
		
	return in;
}


void Utente::controllo(){
	
	if(strlen(cf) !=16)
		throw Errore("cf invalido");
	
}


