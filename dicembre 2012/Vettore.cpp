#include"Vettore.h"

Vettore::Vettore(){
	
	size = 0;
	nelem = 0;

}

Vettore::Vettore(int size_t){
	
	size = size_t;
	nelem=0;
	v = new Pacco[size];
	
}

Vettore::Vettore(const Vettore &ve){
	
	if(this == &ve)
		return;
		
	size = ve.size;
	nelem = ve.nelem;
	
	for(int i = 0;i<nelem;i++)
		v[i]=ve.v[i];
			
}

const  Vettore &Vettore::operator=(Vettore &ve){
	
	if(this == &ve)
		return *this;
		
	delete []v;	
	size = ve.size;
	nelem = ve.nelem;
	
	for(int i = 0;i<nelem;i++)
		v[i]=ve.v[i];

	return *this;			
}

void Vettore::push(Pacco &pa){
	
	if(!full()){
	
		v[nelem]=pa;
		nelem++;
	}
	else{
		
		Pacco *tmp = new Pacco [size+1];
		for(int i = 0;i<size;i++){
			tmp[i]=v[i];
		}
		
		delete []v;
		
		v = new Pacco[size +1];
		
		for(int i = 0;i<size;i++)
			v[i]=tmp[i];	
			
		v[nelem] = pa;
		nelem++;
		delete []tmp;
	}

}

istream &operator>>(istream &in,Vettore &ve){
	
	Pacco pa;
	
	in>>pa;
	
	ve.v[ve.nelem] = pa;
	
	ve.nelem++;
	
	return in;
}

ostream &operator<<(ostream &os,const Vettore &ve){
	
	for(int i = 0;i<ve.nelem;i++)	
		os<<ve.v[i];
	
	return os;	
	
	
}


Pacco &Vettore::access(int index){
	
	if (index<0||index>size)
		throw myecc("errore");
		
	return v[nelem];	
		
}


void Vettore::elimina(){
	
	Pacco  *tmp = new Pacco [size];
	
	for(int i = 0;i<nelem;i++){
		for(int j=0;j<nelem;j++){
			if(v[i].get_peso()<0.5){
				tmp[i]=v[i];
			}
		}
		
	}	
	
	delete []v;
	
	v = new Pacco [size];
	
	for(int i = 0;i<nelem;i++)
		v[i]=tmp[i];
	
	
	delete []tmp;
}

Vettore::~Vettore(){
	
	delete []v;
	
}
