#include"Pila.h"

Pila::Pila(){
	
	nelem = 0;
	
}


void Pila::insert(T &x){

	if(full())
		return;
	
	if(empty()){
		array[nelem] = x;
		nelem++;
		return;
	}
	
	
	array[nelem] = x;
	nelem++;
	
	if(dupli(x)){
		throw bad_item("duplicato");
		nelem--;
	}

		
}



void Pila::print(){
	
	for(int i = 0;i<nelem;i++)
		cout<<array[i];
	
}

bool Pila::dupli(T &y){
	
	
	for(int i =0;i<nelem;i++)
		if(array[i] == y)
			return true;
			
	return false;		

}
