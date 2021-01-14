#include"Elenco.h"

Elenco::Elenco(){
	
	nelem = 0;
	size = 0;
	array = new Cartella [size];
	
}

Elenco::Elenco(int size){
	
	this->size = size;
	
	array = new Cartella[size];
	
	nelem = 0;
	
}

Elenco::Elenco(Elenco &ele){
	
	if(this ==&ele)
		return;
		
	nelem = ele.nelem;
	
	size = ele.size;
	
	array = new Cartella[size];
	
	for (int i = 0;i<nelem;i++)
		array[i]=ele.array[i];	
}

const Elenco &Elenco::operator=(Elenco &ele){
	
	
	if(this ==&ele)
		return *this;
		
	nelem = ele.nelem;
	
	size = ele.size;
	
	delete []array;
	array = new Cartella[size];
	
	for (int i = 0;i<nelem;i++)
		array[i]=ele.array[i];	
		
	return *this;		
	
}

bool Elenco::inElenco(Cartella &e){
	
	for(int i = 0;i<nelem;i++)
		if(array[i]==e)
			return true;
			
	return false;			
}

int Elenco::Posizione(Cartella &e){

	for(int i = 0;i<nelem;i++)
		if(array[i]==e)
			return i;
			
	else
		return -1;			
}

void Elenco::print(){
	
	file.open("PROVA.dat");
	
	for(int i =0;i<nelem;i++)
		file<<array[i];
		
	file.close();	
	
}

void Elenco::morespace(){
	
	Cartella *tmp;
	tmp = new Cartella[size];
	for(int i = 0;i<size;i++)
		tmp[i] = array[i];
			
	delete []array;
		
	array = new Cartella [size++];
		
	for(int i = 0;i<nelem;i++)
		array[i] = tmp[i];	
	
	delete []tmp;
	
}

void Elenco::order(){
	
	Cartella temp;
	for(int j=0;j<nelem-1;j++)
		for(int i=0;i<nelem-j-1;i++)
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
	
}

void Elenco::orderInsert(Cartella &e){
	
	if(empty()){
		array[nelem]= e;
		nelem++;
		
	}
	
	if(full()){
		morespace();
	
		array[nelem] = e;
		nelem++;
	}
}

void Elenco::elimina(Cartella &e){
	
	if(empty())
		return;
	
	int index  = -1;
	
	if(inElenco(e))
		index = Posizione(e);
		
	Cartella tmp;		
	Cartella *ptr;	
	
	array[index] = tmp; 

	ptr = new Cartella [size];
	
	for(int i = 0;i<nelem;i++){
		if(array[i]==tmp)
			cout<<"eliminato";
		else
			ptr[i] = array[i];
	}
	delete []array;
	
	array = new Cartella[size--];
	
	for(int i = 0;i<nelem;i++)
		array[i]=ptr[i];
		
	delete []ptr;	
		
}

void Elenco::show(){
	
	for(int i =0;i<nelem;i++)
		cout<<array[i];	
}

Elenco::~Elenco(){
	
	delete []array;
	
}


