#include"Lettera.h"

Lettera::Lettera():Manoscritto(){
	
	mittente = NULL;
	destinatario = NULL;
	
}

Lettera::Lettera(int codice_t,const char* autore_t,int numpag_t,const char* formato_t,const char* mittente_t,const char *destinatario_t):Manoscritto(codice_t,autore_t,numpag_t,formato_t){
	
	mittente = new char[strlen(mittente_t)+1];
	strcpy(mittente,mittente_t);
	
	destinatario = new char[strlen(destinatario_t)+1];
	strcpy(destinatario,destinatario_t);
	
}

Lettera::Lettera(const Lettera &let):Manoscritto(let){
	
	if(this == &let)
		return;
		
	autore = new char[strlen(let.autore)+1];
	strcpy(autore,let.autore);
	
	destinatario = new char[strlen(let.destinatario)+1];
	strcpy(destinatario,let.destinatario);	
	
}

const Lettera &Lettera::operator=(Lettera &let){
	
		
	if(this == &let)
		return *this;
		
		
	Manoscritto::operator=(let);
		
	autore = new char[strlen(let.autore)+1];
	strcpy(autore,let.autore);
	
	destinatario = new char[strlen(let.destinatario)+1];
	strcpy(destinatario,let.destinatario);	
	
	return *this;
}

Lettera::~Lettera(){
	
	delete []mittente;
	delete []destinatario;
	
}

void Lettera::memorizza(){
	
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
	
	cin.ignore();
	cin.getline(buff,256);
	mittente = new char[strlen(buff)+1];
	strcpy(mittente,buff);
	
	cin.ignore();
	cin.getline(buff,256);
	destinatario = new char[strlen(buff)+1];
	strcpy(destinatario,buff);
	
}


void Lettera::visualizza(){
	
	
	cout<<codice<<" "<<autore<<" "<<numpag<<" "<<formato<<" "<<mittente<<" "<<destinatario<<endl;
	
}
