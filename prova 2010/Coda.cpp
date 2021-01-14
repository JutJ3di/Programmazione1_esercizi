#include"Coda.h"

Coda::Coda(){
	
	nelem = 0;
	r=w=0;

}

Coda::Coda(const char*namefile_t){
	
	namefile = new char[strlen(namefile_t)+1];
	strcpy(namefile,namefile_t);
	
	int n_file;
	
	fstream file;
	file.open(namefile);
	for(int i= 0;i<n_file;i++){
		file>>array[i];
	}
	file.close();
	
	nelem = 0;
	r=0;
	w=n_file;
	
}


void Coda::append(Fotografia &foto){
	
	
	if(!full()){
		
		array[nelem] = foto;
		w = (w+1)%size;
		nelem++;
		
	}
	else
		cout<<"niente spazio"<<endl;
}

void Coda::pop(){
	
	if(!empty()){
		
		r = (r+1)%size;
		nelem--;
		
	}else{
		throw myecc("errore coda vuota");
	}
}

void Coda::stampa(){
	
	for(int i = 0;i<nelem;i++){
		
		cout<<array[i];
		
	}
	
}



bool Coda::full(){
	
	if(nelem == size)
		return true;
	return false;	
	
}


bool Coda::empty(){
		
	if(nelem==0)
		return true;
	return false;
	
}


