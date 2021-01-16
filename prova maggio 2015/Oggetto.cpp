#include"Oggetto.h"

Oggetto::Oggetto(){
	
	des = NULL;
	forma = NULL;
	codice = 0;
	
}

Oggetto::Oggetto(int codice_t,const char*des_t,const char * forma_t){
	
	codice = codice_t;
	
	des = new char[strlen(des_t)+1];
	strcpy(des,des_t);
	
	forma = new char[strlen(forma_t)+1];
	strcpy(forma,forma_t);
	
}


Oggetto::Oggetto(const Oggetto &ogg){
	
	if(this == &ogg)
		return;
		
	codice = ogg.codice;
	
	des = new char[strlen(ogg.des)+1];
	strcpy(des,ogg.des);
	
	forma = new char[strlen(ogg.forma)+1];
	strcpy(forma,ogg.forma);	
	
	
}

const Oggetto &Oggetto::operator=(Oggetto &ogg){
	
	if(this == &ogg)
		return *this;
		
		
	delete []forma;
	delete []des;			
			
	codice = ogg.codice;
	
	des = new char[strlen(ogg.des)+1];
	strcpy(des,ogg.des);
	
	forma = new char[strlen(ogg.forma)+1];
	strcpy(forma,ogg.forma);	
	
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
	
	char buff[255];
	in.getline(buff,256);
	ogg.des = new char[strlen(buff)+1];
	strcpy(ogg.des,buff);
	
	in.ignore();
	in.getline(buff,256);
	ogg.forma = new char[strlen(buff)+1];
	strcpy(ogg.forma,buff);

	return in;
	
}


Oggetto::~Oggetto(){
	
	delete []forma;
	delete []des;
	
}



