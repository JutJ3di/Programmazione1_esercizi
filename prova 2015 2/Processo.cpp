#include"Processo.h"

Processo::Processo():Attivita(){
	
	nome = NULL;
	
	stato = 'W';
	
}

Processo::Processo(int pid_t,const char *des_t,bool start_t,const char *nome_t,char stato_t):Attivita(pid_t,des_t,start_t){
	
	nome = new char[strlen(nome_t)+1];
	strcpy(nome,nome_t);
	
	stato = stato_t;
	
}

Processo::Processo(const Processo &pro):Attivita(pro){
	
	if(this == &pro)
		return;
	
		
		
	nome = new char[strlen(pro.nome)+1];
	strcpy(nome,pro.nome);
	
	stato = pro.stato;
		
	
	
}


const Processo &Processo::operator=(Processo &pro){
	
	if(this == &pro)
		return *this;
	
	Attivita::operator=(pro);	
		
	if(nome)
		delete []nome;	
		
	nome = new char[strlen(pro.nome)+1];
	strcpy(nome,pro.nome);
	
	stato = pro.stato;
			
	return *this;
}

void Processo::set_nome(const char *nome_t){
	if(nome)
		delete []nome;
	nome = new char[strlen(nome_t)+1];
	strcpy(nome,nome_t);
			
		
}

Processo::~Processo(){
	
	delete []nome;
	
}


void Processo::attiva(){
	
	
	start = 1;
	
	if(stato == 'P')
		stato = 'R';
	
}

istream &operator>>(istream &in,Processo &pro){
	
	in>>(Attivita&)pro;
	
	char buff[256];
	
	in.getline(buff,256);
	pro.nome = new char[strlen(buff)+1];
	strcpy(pro.nome,buff);
	
	in>>pro.stato;
	

	return in;
}
ostream &operator<<(ostream &os,const Processo &pro){
	
	os<<(Attivita&)pro<<" "<<pro.nome<<" "<<pro.stato<<" ";
	return os;	
	
}






