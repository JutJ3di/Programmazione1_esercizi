#include"Myvett.h"

const Myvett &Myvett::operator=(Myvett &vet){
	
	if(this == &vet)
		return *this;
		
	Vettore::operator=(vet);
	return *this;
	
}

void Myvett::order(){
	
	 T tmp;
	
	for(int i = 0;i<nelem-1;i++)
		for(int j =0;j<nelem-i-1;j++)
			if(array[j]>array[j+1])
			{
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
			
	
}

void Myvett::print_on_file(const char *namefile){
	
	ofstream file;
	
	file.open(namefile,ios::out);
	
	for(int i = 0;i<nelem;i++)
		file<<array[i]<<endl;
		
	file.close();		
}



bool Myvett::is_order(){
	
	for(int i = 0;i<nelem-1;i++)
		if(array[i]<array[i+1])
			return true;
	
	return false;
	
}


void Myvett::binary_search(T &x){
	
	int min = array[0].get_dim();
	int max = array[nelem].get_dim();
	
	int med = (min+(max-min))/2;
	
	if(!is_order())
		throw ("errore");
	
		while(min<max)
		{
		
			if(array[med]==x)
				cout<<"x trovato"<<endl;
		
		
			if (array[med] < x)
				min = med + 1;

			else
				max = med - 1;			
		
		}
			
}


