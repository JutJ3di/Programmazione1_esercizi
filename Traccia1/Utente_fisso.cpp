#include"Utente_fisso.h"

Utente_fisso::Utente_fisso():Utente(),indi(){
	
	dest = NULL;
	
}


Utente_fisso::Utente_fisso(const char codice[5],const char *inte,const char num[10],const char *dest,string via,string civico,string cap,string city):Utente(codice,inte,num),indi(via,civico,cap,city){
	
	this->dest = new char[strlen(dest)+1];
	strcpy(this->dest,dest);
	
}

Utente_fisso::Utente_fisso(Utente_fisso &ute):Utente(ute){
	
	if(this == &ute)
		return;
		
	dest = ute.dest;	
	indi = ute.indi;
	
}

const Utente_fisso &Utente_fisso::operator=(Utente_fisso &ute){
	
	if(this ==&ute)
		return *this;
		
	delete []dest;
	
	Utente::operator=(ute);
	
	dest = ute.dest;	
	indi = ute.indi;
	
	return *this;		
	
}

Utente_fisso::~Utente_fisso(){
	delete []dest;
}

void Utente_fisso::offerta(){
	
	if(strcpy(dest,off) == 0 && indi.get_city().compare(cit_off) == 0)
		cout<<"Offerta applicabile"<<endl;
		
	
}

ostream &operator<<(ostream &os,const Utente_fisso &ute){
	
	os<<(Utente&)ute<<ute.dest<<" "<<ute.indi<<endl;
	return os;
	
}


