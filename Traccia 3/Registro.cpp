#include"Registro.h"

Registro::Registro(string docente,string materia,string classe){
	
	this->classe = classe;
	this->docente = docente;
	this->materia = materia;
	nelem = 0;
	
}

Registro::Registro(Registro &re){
	
	if(this == &re)
		return;
		
	classe = re.classe;
	docente = re.docente;
	materia = re.materia;
	
	nelem = re.nelem;
	
	for(int i = 0;i<nelem;i++)
		array[i] = re.array[i];
		
}


const Registro &Registro::operator=(Registro &re){
	if(this == &re)
		return *this;
		
	classe = re.classe;
	docente = re.docente;
	materia = re.materia;
	
	nelem = re.nelem;
	
	for(int i = 0;i<nelem;i++)
		array[i] = re.array[i];

	return *this;		
}

void Registro::interrogazione(const char *id_t,int n){
	
	
	for(int i = 0;i<nelem;i++)
		if(strcmp(array[i].get_id(),id_t) == 0)
			array[i].set_voto(n);		
	
}

void Registro::inserimento(Studente &ele){
	if(!full()){
		array[nelem] = ele;
		nelem++;
	}

	Studente tmp;
	
	for(int j = 0;j<nelem-1;j++)
		for(int i = 0;i = nelem-j-1;i++)
			if(strcmp(array[i].get_cognome(),array[i+1].get_cognome())>0)
			{
				tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
				
			}
			
	
}

void Registro::print(){

	fstream file;
	file.open("prova.dat",ios::out);
	
	for(int i = 0;i<nelem;i++){
		cout<<array[i];
		file<<array[i];
	}
	file.close();	
}



float Registro::media_giornaliera(){
	
	float sum;
	for(int i = 0;i<nelem;i++)
		sum = array[i].get_voto() + sum;
	return sum/nelem;
}
