#include"Vettore.h"

Vettore::Vettore(){
	
	
	size = 1;
	
	array = new Immagine[size];
	
	nelem =0;
}

Vettore::Vettore(Vettore &vet){
	
	if(this == &vet)
		return;
		
	size = vet.size;
	nelem = vet.nelem;	
	
	for(int i = 0;i<nelem;i++)
		array[i] = vet.array[i];	
}

const Vettore &Vettore::operator=(Vettore &vet){
	if(this == &vet)
		return *this;
	
	delete []array;	
		
	size = vet.size;
	nelem = vet.nelem;	
	
	for(int i = 0;i<nelem;i++)
		array[i] = vet.array[i];	
	
	return *this;	
}


void Vettore::push(T &ele){

	
	if(!full()){
		array[nelem] = ele;
		nelem++;
	}else{
		
		size++; //nuova memoria
		
		T *tmp = new T[size];
		
		for(int i = 0;i<nelem;i++)
			tmp[i] = array[i];
		
		delete []array;
		
		array = new T[size];
		
		for(int i = 0;i<nelem;i++)
			array[i] = tmp[i];			
		
		delete []tmp;	
	
		array[nelem] = ele;
		nelem++;
			
	}
	
}

void Vettore::print(){
	for(int i = 0 ; i<nelem ; i++)
		cout<<array[i]<<endl;
}


T &Vettore::operator[](int index){
	
	if(index > nelem || index < 0)
		exit(1);
	
	return array[index];
	
}

Vettore::~Vettore(){
	delete []array;
}

