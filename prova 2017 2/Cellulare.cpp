#include"Cellulare.h"


Cell::Cell():Oggetto(){
	
	costo =0;
	modello = NULL;
	
}

Cell::Cell(int codice_t,const char *des_t,const char* forma_t,const char *modello_t,float costo_t):Oggetto(codice_t,des_t,forma_t){
	
	
	modello = new char[strlen(modello_t)+1];
	strcpy(modello,modello_t);
	
}

Cell::Cell(const Cell &ce):Oggetto(ce){

	if(this == &ce)
		return;
		
	modello = new char [strlen(ce.modello)+1];
	strcpy(modello,ce.modello);
	
	costo = ce.costo;	

}


const Cell &Cell::operator=(Cell &ce){
	
	if(this == &ce)
		return *this;
		
		
	Oggetto::operator=(ce);	
		
	delete []modello;
		
	modello = new char [strlen(ce.modello)+1];
	strcpy(modello,ce.modello);
	
	costo = ce.costo;	
	return *this;
}

void Cell::set_modello(const char *modello_t){
	
	delete []modello;
	
	modello = new char [strlen(modello_t)+1];
	strcpy(modello,modello_t);	
}

ostream &operator<<(ostream &os,const Cell &ce){
	
	os<<(Oggetto&)ce<<" "<<ce.modello<<" "<<ce.costo<<endl;
	return os;
	
} 


istream &operator>>(istream &in,Cell &ce){
	
	in>>(Oggetto&)ce;
	
	char buff[256];
	
	in.getline(buff,256);
	
	ce.modello = new char [strlen(buff)+1];
	strcpy(ce.modello,buff);
	
	in>>ce.costo;
	
	return in;
	
}

Cell::~Cell(){
	
	delete []modello;
}




