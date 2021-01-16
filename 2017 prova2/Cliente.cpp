
#include"Cliente.h"

Cliente::Cliente(){
	
	profilo = NULL;

	
}

Cliente::Cliente(const char codice[9],const char *profilo){
	
	strcpy(this->codice,codice);
	
	this->profilo = new char[strlen(profilo)+1];
	strcpy(this->profilo,profilo);
	
}

Cliente::Cliente(const Cliente &cli){
	
	if(this == &cli)
		return;
		
	
	strcpy(codice,cli.codice);
	
	profilo = new char[strlen(profilo)+1];
	strcpy(profilo,cli.profilo);
		
}



const Cliente &Cliente::operator=(Cliente &cli){
	
	if(this == &cli)
		return *this;
		
	delete []profilo;
	
	strcpy(codice,cli.codice);
	
	profilo = new char[strlen(cli.profilo)+1];
	strcpy(profilo,cli.profilo);	
	
	return *this;
}

void Cliente::set_profilo(const char *profilo){
	
	delete []this->profilo;

	this->profilo = new char[strlen(profilo)+1];
	strcpy(this->profilo,profilo);	
}

void Cliente::check(){
	
	if(strlen(codice)<=8)
		throw Eccezione("codice errato");
	
}

ostream &operator<<(ostream &os,const Cliente &cli){
	
	os<<cli.get_codice()<<" "<<cli.get_profilo()<<endl;
	return os;
}
ofstream &operator<<(ofstream &of,const Cliente &cli){

	of<<cli.get_codice()<<" "<<cli.get_profilo()<<endl;
	return of;
	
}

istream &operator>>(istream &in,Cliente &cli){
	
	in>>cli.codice;
	
	char buff[256];
	in>>buff;
	
	cli.set_profilo(buff);
	
}

Cliente::~Cliente(){
	delete []profilo;
}
