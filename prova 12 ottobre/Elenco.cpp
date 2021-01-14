#include"Elenco.h"

Elenco::Elenco(){
	nelem=0;	
}

Elenco::Elenco(Elenco &ele){
	
	if(this==&ele)
		return;
		
	nelem = ele.nelem;
	
	for(int i = 0;i<nelem;i++)	
		array[i] = ele.array[i];	
	
}

const Elenco &Elenco::operator=(Elenco &ele){
	
	if(this==&ele)
		return *this;
		
	nelem = ele.nelem;
	
	for(int i = 0;i<nelem;i++)	
		array[i] = ele.array[i];	
	
	return *this;	
	
}

void Elenco::print(){
	
	for(int i =0;i<nelem;i++)
		array[i].visualizza();
		
		
	
}


void Elenco::pop(){
	if(!empty())
		nelem--;
	else
		cout<<"vuota"<<endl;	
}

void Elenco::push(Manoscritto &man){
	
	if(full())
		return;

	if(empty()){
		array[nelem] = man;
		nelem++;
	}

	if(!dupli(man)){
		
		array[nelem] = man;
		nelem++;
			
    
	}else
		throw Duplicato("già presente");
	
}




bool Elenco::dupli(Manoscritto &man){
	
	for(int i =0;i<nelem;i++)
		if(array[i].get_codice() == man.get_codice())
			return true;
	
	return false;
}



