#include"Ordini.h"

Ordine::Ordine(){
	nelem = 0;
}

Ordine::Ordine(Ordine &ord){
	
	if(this == &ord)
		return;
		
	nelem = ord.nelem;
	
	for(int i = 0;i<nelem;i++)
		array[i] = ord.array[i];	
	
}


const Ordine &Ordine::operator=(Ordine &ord){
	if(this == &ord)
		return *this;
		
	nelem = ord.nelem;
	
	for(int i = 0;i<nelem;i++)
		array[i] = ord.array[i];		
	
	return *this;
}


void Ordine::inserimento(Prodotto &pro,int numero_t){
	if(nelem == size)
		throw("eccezione");
	
	array[nelem].numero = numero_t;
	
	strcpy(array[nelem].id,pro.get_id());
	array[nelem].costo_effettivo = (pro.get_costo()-pro.imposta())*numero_t;
}

float Ordine::costo_vero(){
	float sum = 0;
	for(int i = 0;i<nelem;i++)	
		sum = array[nelem].costo_effettivo + sum;
	return sum;
}
