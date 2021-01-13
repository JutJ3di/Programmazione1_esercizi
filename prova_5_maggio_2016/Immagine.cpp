#include"Immagine.h"

Immagine::Immagine(){
	
	nome = NULL;
	dim = 0;
	
}

Immagine::Immagine(const char *nome,int dim){
	
	this->nome = new char[strlen(nome)+1];
	strcpy(this->nome,nome);
	
	this->dim = dim;
	
}

Immagine::Immagine(const Immagine &imm){
	
	if(this == &imm)
		return;
		
	nome = new char[strlen(imm.nome)+1];
	strcpy(nome,imm.nome);	
	
	dim = imm.dim;
	
}

const Immagine &Immagine::operator=(Immagine &imm){
	if(this == &imm)
		return *this;
		
	nome = new char[strlen(imm.nome)+1];
	strcpy(nome,imm.nome);	
	
	dim = imm.dim;	
	
	return *this;
}

void Immagine::set_nome(const char *nome){
	
	delete []this->nome;
	
	this->nome = new char[strlen(nome)+1];
	strcpy(this->nome,nome);
	
}

Immagine::~Immagine(){
	delete []this->nome;
}

ostream &operator<<(ostream &os,const Immagine &imm){
	
	os<<imm.get_nome()<<" "<<imm.get_dim();
	return os;
	
}


bool operator==(const Immagine &x,const Immagine &y){
	
	if(strcpy(x.nome,y.nome) == 0 && x.get_dim() == y.get_dim())
		return true;
	
	return false;	
	
}

bool operator>(const Immagine &x,const Immagine &y){

	if(strcpy(x.nome,y.nome) > 0 && x.get_dim() > y.get_dim())
		return true;
	
	return false;
	
}

bool operator<(const Immagine &x,const Immagine &y){

	if(strcpy(x.nome,y.nome) < 0 && x.get_dim() < y.get_dim())
		return true;
	
	return false;
	
}


istream &operator>>(istream &in,Immagine &imm){
	
	char buff[256];
	
	in.getline(buff,256);
	
	imm.set_nome(buff);
	
	in>>imm.dim;

	return in;
}

ofstream &operator<<(ofstream &of,const Immagine &imm){
	of<<imm.get_nome()<<" "<<imm.get_dim();
	return of;
		
}
