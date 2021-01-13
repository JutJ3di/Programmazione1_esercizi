#include"Utente_posta.h"

Utente_posta::Utente_posta(const char *cf,const char *cognome,const char *email,int giorno,int mese,int anno):Utente(cf,cognome,giorno,mese,anno){
	
	this->email = new char[strlen(email)+1];
	strcpy(this->email,email);
	
}

Utente_posta::Utente_posta(const Utente_posta &ute):Utente(ute){
	
	if(this == &ute)
		return;
		
	email = new char[strlen(ute.email)+1];
	strcpy(email,ute.email);	
	
}

const Utente_posta &Utente_posta::operator=(Utente_posta &ute){
	
	if(this == &ute)
		return *this;
	
	
	Utente::operator=(ute);
	
	delete []email;	
	email = new char[strlen(ute.email)+1];
	strcpy(email,ute.email);	
		
	return *this;
}


ostream &operator<<(ostream &os,const Utente_posta &ute){
	os<<(Utente&)ute<<" "<<ute.email;
	return os;
}
istream &operator>>(istream &in,Utente_posta &ute){
	
	in>>(Utente&)ute;
	char buff[256];
	in.getline(buff,256);
	
	ute.email = new char[strlen(buff)+1];
	strcpy(ute.email,buff);	
	
	
}

void Utente_posta::controllo(){
	int x;
	for(int i =  0;i<strlen(email);i++){
		if(email[i] == '@')
			x++;
	}
	if(x != 1)
		throw Errore ("email errata");
	
}

Utente_posta::~Utente_posta(){
	delete []email;
}
