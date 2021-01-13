#include"Utente.h"

Utente::Utente(){
	
	inte = NULL;
	codice = NULL;
	num = NULL;
	
}

Utente::Utente(const char codice[5],const char *inte,const char num[10]){
	
	strcpy(this->codice,codice);
	
	this->inte = new char[strlen(inte)+1];
	strcpy(this->inte,inte);
	
	strcpy(this->num,num);
	
}

Utente::Utente(const Utente &ute){
	
	if(this == &ute)
		return;
		
	codice = new char[strlen(ute.codice)+1];
	strcpy(codice,ute.codice);	
	
	inte = new char[strlen(ute.inte)+1];
	strcpy(inte,ute.inte);
	
	num = new char[strlen(ute.num)+1];
	strcpy(num,ute.num);
	
}


const Utente &Utente::operator=(Utente &ute){
	if(this == &ute)
		return *this;
		
	codice = new char[strlen(ute.codice)+1];
	strcpy(codice,ute.codice);	
	
	delete []inte;
	
	inte = new char[strlen(ute.inte)+1];
	strcpy(inte,ute.inte);
	
	num = new char[strlen(ute.num)+1];
	strcpy(num,ute.num);
	
	return *this;	
}


ostream &operator<<(ostream &os,const Utente &ute){
	
	os<<ute.get_codice()<<" "<<ute.get_inte()<<" "<<ute.get_num();
	
	return os;
	
}


Utente::~Utente(){
	
	delete []this->inte;
	
}
