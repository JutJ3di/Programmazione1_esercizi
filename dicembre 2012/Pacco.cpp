#include"Pacco.h"

Pacco::Pacco(){
	
	des = NULL;
	forma = NULL;
	peso = 0;
	
}

Pacco::Pacco(const char *des_t,float peso_t,const char*forma_t){
	
	des = new char[strlen(des_t)+1];
	strcpy(des,des_t);
	
	peso = peso_t;
	
	forma = new char[strlen(forma_t)+1];
	strcpy(forma,forma_t);
	
}

Pacco::Pacco(const Pacco &pa){
	
	if(this==&pa)
		return;
		
	des = new char[strlen(pa.des)+1];
	strcpy(des,pa.des);
	
	peso = pa.peso;
	
	forma = new char[strlen(pa.forma)+1];
	strcpy(forma,pa.forma);	
	
}


const Pacco &Pacco::operator=(Pacco &pa){
	
	if(this==&pa)
		return *this;
		
	
	delete []des;
	delete []forma;	
		
	des = new char[strlen(pa.des)+1];
	strcpy(des,pa.des);
	
	peso = pa.peso;
	
	forma = new char[strlen(pa.forma)+1];
	strcpy(forma,pa.forma);	
	
	return *this;
}

ostream &operator<<(ostream &os,const Pacco &pa){
	
	os<<pa.des<<" "<<pa.peso<<" "<<pa.forma<<endl;
	return os;
	
}


istream &operator>>(istream &in,Pacco &pa){
	
	char buff[256];
	
	in.getline(buff,256);
	pa.des = new char[strlen(buff)+1];
	strcpy(pa.des,buff);
	
	in>>pa.peso;
	
	in.ignore();
	
	in.getline(buff,256);
	pa.forma = new char[strlen(buff)+1];
	strcpy(pa.forma,buff);
	
	return in;
}



Pacco::~Pacco(){
	
	delete []des;
	delete []forma;
	
}
