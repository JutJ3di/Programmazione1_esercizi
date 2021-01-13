#include"Utente_mobile.h"

Utente_mobile::Utente_mobile():Utente(){
	
	profilo = "vuoto";
	
}

Utente_mobile::Utente_mobile(const char codice[5],const char *inte,const char num[10],string prifilo):Utente(codice,inte,num){
	
	this->profilo = profilo;
	
}

Utente_mobile::Utente_mobile(const Utente_mobile &ute):Utente(ute){
	
	if(this == &ute)
		return;
		
	profilo = ute.profilo;	
	
}

const Utente_mobile &Utente_mobile::operator=(Utente_mobile &ute){

	if(this == &ute)
		return *this;
		
	Utente::operator=(ute);
		
	profilo = ute.profilo;
	return *this;	
}


void Utente_mobile::offerta(){
	
	if(profilo.compare(offe) == 0)
		cout<<"Offerta applicabile a "<<codice<<endl;
	
}

void Utente_mobile::formato(){
		
	if(num[0]!='+')
		throw Eccezione("Non c'è il +");
		
	if(num[1]!='3')
		throw Eccezione("Non c'è il 3");
		
	if(num[2] == '9')
		throw Eccezione ("Non c'è il 9");
		
}

ostream &operator<<(ostream &os,const Utente_mobile &ute){
	
	os<<(Utente&)ute<<" "<<ute.profilo;
	return os;
	
}




