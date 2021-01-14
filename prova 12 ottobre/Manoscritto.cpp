#include"Manoscritto.h"

Manoscritto::Manoscritto(){
	
	autore = NULL;
	numpag = 0;
	formato = NULL ;
	codice = 0;
	
}

Manoscritto::Manoscritto(int codice_t,const char* autore_t,int numpag_t,const char* formato_t){
	
	codice = codice_t;
	
	autore = new char[strlen(autore_t)+1];
	strcpy(autore,autore_t);
	
	numpag = numpag_t;
	
	formato = new char[strlen(formato_t)+1];
	strcpy(formato,formato_t);
	
}

Manoscritto::Manoscritto(const Manoscritto &man){
	
	if(this==&man)	
		return;
		
	
	codice = man.codice;	
		
	autore = new char[strlen(man.autore)+1];
	strcpy(autore,man.autore);	

	numpag= man.numpag;
	
	formato = new char[strlen(man.formato)+1];
	strcpy(formato,man.formato);
}


const Manoscritto &Manoscritto::operator=(Manoscritto &man){
	
	if(this==&man)	
		return *this;
		
		
	delete []autore;
	delete []formato;	
	
	codice = man.codice;	
		
	autore = new char[strlen(man.autore)+1];
	strcpy(autore,man.autore);	

	numpag= man.numpag;
	
	formato = new char[strlen(man.formato)+1];
	strcpy(formato,man.formato);
	
	return *this;
	
}

void Manoscritto::visualizza(){
	
	cout<<codice<<" "<<autore<<" "<<numpag<<" "<<formato<<endl;
	
}

void Manoscritto::memorizza(){
	
	char buff[256];
	
	cin>>codice;
	
	cin.getline(buff,256);
	
	autore = new char[strlen(buff)+1];
	strcpy(autore,buff);
	
	cin>>numpag;
	
	cin.ignore();
	
	cin.getline(buff,256);
	formato = new char[strlen(buff)+1];
	strcpy(formato,buff);
	
	
}


Manoscritto::~Manoscritto(){
	delete []autore;
	delete []formato;
}
