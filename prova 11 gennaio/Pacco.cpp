#include"Pacco.h"


Pacco::Pacco(){
	
	
	codice = 0;
	peso = 0;
	
	indirizzo = NULL;	
	
}


Pacco::Pacco(int codice_t,float peso_t,const char* indi_t){
	
	codice = codice_t;
	
	peso = peso_t;
	
	indirizzo = new char[strlen(indi_t)+1];
	strcpy(indirizzo,indi_t);
	
}

Pacco::Pacco(const Pacco &pac){
	
	if(this == &pac)
		return;
		
	codice = pac.codice;
	
	peso = pac.peso	;
	
	indirizzo = new char[strlen(pac.indirizzo)+1];
	strcpy(indirizzo,pac.indirizzo);
	
	
}


const Pacco &Pacco::operator=(Pacco &pac){
	
	if(this == &pac)
		return *this;
		
	codice = pac.codice;
	
	peso = pac.peso	;
	
	delete []indirizzo;
	
	indirizzo = new char[strlen(pac.indirizzo)+1];
	strcpy(indirizzo,pac.indirizzo);
	
	return *this;	
	
}

Pacco::~Pacco(){
	
	delete []indirizzo;
	
}

ostream &operator<<(ostream &os,const Pacco &pac){
	
	os<<pac.codice<<" "<<pac.peso<<" "<<pac.indirizzo<<endl;
	return os;	
	
}

istream &operator>>(istream &in,Pacco &pac){
	
	
	in>>pac.codice;
	in>>pac.peso;
	
	char buff[256];
	
	in.getline(buff,256);
	
	pac.indirizzo = new char[strlen(buff)+1];
	strcpy(pac.indirizzo,buff);
	
	return in;
	
}
