#include"Pila.h"

Pila::Pila(){
	
	nelem = 0;
	size = 0;
	array = NULL;
	
}

Pila::Pila(int size){
	
	this->size = size;
	
	array = new T[size];
	
}


Pila::Pila(Pila &pi){
	
	if(this == &pi)
		return;
		
	nelem = pi.nelem;
	
	size = pi.size;
	
	array = new T [pi.size+1];
		
	for(int i = 0;i<size;i++)
		array[i] = pi.array[i];	
		
}


const Pila &Pila::operator=(Pila &pi){
	
	
	if(this == &pi)
		return *this;
		
	nelem = pi.nelem;
	
	size = pi.size;
	
	array = new T [pi.size+1];
		
	for(int i = 0;i<size;i++)
		array[i] = pi.array[i];		
	
	return *this;
	
}

void Pila::push(T &ele){
	
	array[nelem] = ele;
	nelem++;
	
}

void Pila::print(){
	
	for(int i = 0;i<nelem;i++)
		cout<<array[i];
	
}




Pila::~Pila(){
	
	delete []array;
	
}





