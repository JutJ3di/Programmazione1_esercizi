#include"Libro.h"

Libro::Libro():Oggetto(){
	
	titolo = NULL;
	numpag = 0;
	
}

Libro::Libro(int codice_t,const char *des_t,const char* forma_t,const char *titolo_t,int numpag_t):Oggetto(codice_t,des_t,forma_t){
	
	
	titolo = new char[strlen(titolo_t)+1];
	strcpy(titolo,titolo_t);
	
	numpag = numpag_t;
	
}

Libro::Libro(const Libro &lib):Oggetto(lib){
	
	if(this == &lib)
		return;
		
	titolo = new char[strlen(lib.titolo)+1];
	strcpy(titolo,lib.titolo);
	
	numpag = lib.numpag;
	
}


const Libro &Libro::operator=(Libro &lib){
	
	if(this == &lib)
		return *this;
	
	Oggetto::operator=(lib);
		
	delete []titolo;
		
	titolo = new char[strlen(lib.titolo)+1];
	strcpy(titolo,lib.titolo);
	
	numpag = lib.numpag;
	
	return *this;
}


void Libro::set_titolo(const char *titolo_t){
	
	delete []titolo;
	
	titolo = new char[strlen(titolo_t)+1];
	strcpy(titolo,titolo_t);
	
}


ostream &operator<<(ostream &os,const Libro &li){
	
	os<<(Oggetto&)li<<li.titolo<<" "<<li.numpag<<endl;
	return os;
	
}

istream &operator>>(istream &in,Libro &li){
	
	in>>(Oggetto&)li;
	
	char buff[256];
	
	in.getline(buff,256);
	
	li.titolo = new char[strlen(buff)+1];
	strcpy(li.titolo,buff);
	
	in>>li.numpag;
	
	return in;
	
}


Libro::~Libro(){
	
	delete []titolo;
	
}
