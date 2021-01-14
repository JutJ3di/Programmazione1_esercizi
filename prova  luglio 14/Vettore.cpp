#include"Vettore.h"


Vettore::Vettore():size(1),nelem(0){
	
	array = new Rileva [size];
		
}

Vettore::Vettore(const Vettore &vet){
	
	if(this == &vet)
		return;
		
	array = new Rileva[size];
	for(int i =0;i<nelem;i++)
		array[i] = vet.array[i];	
}

const Vettore &Vettore::operator=(const Vettore &vet){
	
	if(this == &vet)
		return *this;
		
	array = new Rileva[size];
	for(int i =0;i<nelem;i++)
		array[i] = vet.array[i];	
	
	return *this;	
}

void Vettore::push(Rileva &ri){
	
	if(empty()){
		array[nelem];
		nelem++;
	}
	else{
		size = size++;
		Rileva *tmp = new Rileva[size];
		
		for(int i = 0;i<nelem;i++)
			tmp[i] = array[i];
		
		delete []array;
		
		for(int i =0;i<nelem;i++)
			array[i] = tmp[i];
		
		delete []tmp;
		array[nelem];
		nelem++;
	}
	
}




