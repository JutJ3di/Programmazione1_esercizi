#include"Fotografia.h"

Fotografia::Fotografia(){
	
	titolo = NULL;
	formato = NULL;
	
}

Fotografia::Fotografia(const char *titolo,const char *formato_t){
	
	
	this->titolo = new char[strlen(titolo)+1];
	strcpy(this->titolo,titolo);
	
	formato = new char[strlen(formato_t)+1];
	strcpy(formato,formato_t);
	
}



Fotografia::Fotografia(const Fotografia &foto){
	
	if(this==&foto)
		return;
		
	
	titolo = new char[strlen(foto.titolo)+1];
	strcpy(titolo,foto.titolo);
	
	formato = new char[strlen(foto.formato)+1];
	strcpy(formato,foto.formato);
		
	
}

const Fotografia &Fotografia::operator=(const Fotografia &foto){
	
	if(this==&foto)
		return *this;
		
		
	if(titolo)
		delete []titolo;
		
	if(formato)
		delete []formato;		
	
	
	titolo = new char[strlen(foto.titolo)+1];
	strcpy(titolo,foto.titolo);
	
	formato = new char[strlen(foto.formato)+1];
	strcpy(formato,foto.formato);
			
	return *this;
	
}
void Fotografia::set_formato(const char * formato_t){
	
	if(formato)
		delete []formato;
		
	formato = new char[strlen(formato_t)+1];
	strcpy(formato,formato_t);
		
}

void Fotografia::set_titolo(const char *titolo_t){
	
	if(titolo)
		delete []titolo;
		
	titolo =new char[strlen(titolo_t)+1];
	strcpy(titolo,titolo_t);	
	
	
}


Fotografia::~Fotografia(){
	delete []formato;
	delete  []titolo;
}

ostream &operator<<(ostream &os,const Fotografia &foto){
	
	os<<foto.formato<<" "<<foto.titolo<<" "<<endl;
	return os;
	
}

ofstream &operator<<(ofstream &of,const Fotografia &foto){
	
	of<<strlen(foto.titolo)<<""<<foto.formato<<" "<<foto.titolo<<" ";
	return of;	
	
}


istream &operator>>(istream &in,Fotografia &foto){
	
	char buff [256];
	in.getline(buff,256);
	
	foto.titolo = new char[strlen(buff)+1];
	strcpy(foto.titolo,buff);
	
	in.ignore(128);
	in.getline(buff,256);
	
	foto.formato = new char[strlen(buff)+1];
	strcpy(foto.formato,buff);
	return in;
}
