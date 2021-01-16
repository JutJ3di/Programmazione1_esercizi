#include"Oggetto.h"


Oggetto::Oggetto(){
	
	forma = NULL;
	des = NULL;
	codice = 0;
	
}

Oggetto::Oggetto(int codice_t,const char *des_t,const char* forma_t){
	
	
	codice = codice_t;
	
	forma = new char[strlen(forma_t)+1];
	strcpy(forma,forma_t);
	
	des = new char[strlen(des_t)+1];
	strcpy(des,des_t);
	
}


Oggetto::Oggetto(const Oggetto &other){
	
	if(this == &other)
		return;
	
	
	codice = other.codice;
	
	des = new char[strlen(other.des)+1];
	strcpy(des,other.des);
	
	forma = new char[strlen(other.forma)+1];
	strcpy(forma,other.forma);
	
}


const Oggetto &Oggetto::operator=(Oggetto &other){
	
	
	if(this == &other)
		return *this;
	
	
	delete []des;
	delete []forma;
	
	codice = other.codice;
	
	des = new char[strlen(other.des)+1];
	strcpy(des,other.des);
	
	forma = new char[strlen(other.forma)+1];
	strcpy(forma,other.forma);	
	
	return *this;
	
}

void Oggetto::set_des(const char *des_t){
	
	delete []des;
	
	des = new char[strlen(des_t)+1];
	strcpy(des,des_t);
	
}



void Oggetto::set_forma(const char *forma_t){
	
	delete []forma;
	
	forma = new char[strlen(forma_t)+1];
	strcpy(forma,forma_t);
}


ostream &operator<<(ostream &os,const Oggetto &ogg){
	
	
	os<<ogg.codice<<" "<<ogg.des<<" "<<ogg.forma<<endl;
	return os;
	
}


istream &operator>>(istream &in,Oggetto &ogg){
	
	in>>ogg.codice;
	
	char buff[256];
	
	in.getline(buff,256);
	ogg.forma = new char[strlen(buff)+1];
	strcpy(ogg.forma,buff);
	
	in.ignore();
	
	in.getline(buff,256);
	ogg.des = new char[strlen(buff)+1];
	strcpy(ogg.des,buff);
	
	return in;
}




Oggetto::~Oggetto(){
	
	
	delete []des;
	delete []forma;
	
}
