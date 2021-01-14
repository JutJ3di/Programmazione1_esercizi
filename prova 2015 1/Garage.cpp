#include"Garage.h"

Garage::Garage(){
	
	nelem = 0;
	size = 20;
	vec = new Veicolo [size];
}

void Garage::immissione(Veicolo &ve){

		
	
	if(strcmp(ve.get_veicolo(),"automobile")){
		
		
		vec[nelem] = ve;
	
		nelem++;			
		
	}else if(strcmp(ve.get_veicolo(),"moto")){
		
		vec[nelem] = ve;
		nelem++;
		
	}else{
		
		throw myecc("errore");
		
	}
	
	
	
}

void Garage::display(){
	
	for(int i  = 0;i<nelem;i++){
		cout<<vec[i]<<endl;
	}
	
}

void Garage::pop(){
	
	Veicolo ve = vec[nelem];
	nelem--;
	
}

void Garage::estrazione(int n){
	
	
	Veicolo tmp;
	
 	if(n <20){
 		
 		tmp = vec[nelem];
 		vec[nelem] = vec[n];
 		vec[n] = tmp;
 		pop();	
	 }else
	 	return;
	 
}


