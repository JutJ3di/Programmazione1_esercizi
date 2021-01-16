#include"Pila_o.h"


Pila_o::Pila_o():Pila(){
	
	forma_t = NULL;
	
}

Pila_o::Pila_o(int size,const char * forma_t):Pila(size){
	this->forma_t= new char[strlen(forma_t)+1];
	strcpy(this->forma_t,forma_t);
}

Pila_o::Pila_o(Pila_o &pi):Pila(pi){

	if(this == &pi)
		return;	
	
	forma_t = new char[strlen(pi.forma_t)+1];
	strcpy(forma_t,pi.forma_t);
	
}

const Pila_o &Pila_o::operator=(Pila_o &pi){
	
	if(this == &pi)
		return *this;	
	
	Pila::operator=(pi);
	
	delete []forma_t;
	
	forma_t = new char[strlen(pi.forma_t)+1];
	strcpy(forma_t,pi.forma_t);
	return *this;	
	
}

Pila_o::~Pila_o(){
	
	delete []forma_t;
	
}

bool Pila_o::check(T &ele){
	
	if(strcmp(ele.get_forma(),forma_t) == 0)
		return true;
	else
		return false;	
	
}

void Pila_o::push(T &ele){
	
	if(check(ele)){
		array[nelem] = ele;
		nelem++;	
	}else
		throw bad_insert("errore");
	
	
}
