#include"Bene.h"

Bene::Bene():Prodotto(){
	
	ne = 0;
	des = NULL;
	
}

Bene::Bene(const char id[5],const char *genere ,float costo,bool ne,const char *des):Prodotto(id,genere,costo){
	
	this->ne = ne;
	
	this->des = new char[strlen(des)+1];
	strcpy(this->des,des);
	
}

Bene::Bene(const Bene &be):Prodotto(be){
	
	if(this == &be)
		return;
		
	ne = be.ne;
	
	des = new char[strlen(be.des)+1];
	strcpy(des,be.des);	
	
}


const Bene &Bene::operator=(Bene &be){
	if(this == &be)
		return *this;
		
		
	Prodotto::operator=(be);
		
	ne = be.ne;
	
	delete []des;
	des = new char[strlen(be.des)+1];
	strcpy(des,be.des);		
	return *this;
}

Bene::~Bene(){
	delete []des;
}


float Bene::imposta(){
	
	Prodotto::imposta();
	
	if(ne == true)
		return costo*0.04;
	else
		return 0.22*costo;		
	
}

