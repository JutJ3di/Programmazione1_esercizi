#include"Coda.h"

Coda::Coda(){
	
	r=w=nelem=0;
	size = 20;
}

Coda::Coda(Coda &co){
	
	if(this== &co)
		return;
		
	nelem = co.nelem;
	
	r=co.r;
	w = co.w;
	
	for(int i = co.r;i < co.w;i++)
		array[i] = co.array[i];
	
}

const Coda &Coda::operator=(Coda &co){

	if(this== &co)
		return *this;
		
	nelem = co.nelem;
	
	r=co.r;
	w = co.w;
	
	for(int i = r;i<w;i++)
		array[i] = co.array[i];

	return *this;

}

void Coda::append(Filem &fi){
	
	
	if(!full()){
		array[w] = fi;
		w = (w+1)%size;
		nelem++;
	}else
		cout<<"Piena";
	
}

void Coda::pop(){
	
	if(!empty()){
		cout<<array[r]<<" eliminatoo"<<endl;
		r = (r+1)%size;
		nelem--;
	}
	
}

void Coda::display(){
	
	for(int i = r;i<w;i++)
		cout<<array[i]<<endl;
	
}

void Coda::on_file(){
	
	
	for(int i = r;i< w;i++)
		array[i].mem_dati(file);
	
}

