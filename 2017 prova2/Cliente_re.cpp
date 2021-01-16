#include"Cliente_re.h"

Cliente_registrato::Cliente_registrato():Cliente(),timestrap(){

	login = NULL;
	pass = NULL;

}

Cliente_registrato::Cliente_registrato(const char codice[9],const char*profilo,const char *login,const char *pass,int ore,int minuti ,int secondi):Cliente(codice,profilo),timestrap(ore,minuti,secondi){
	
	this->login = new char[strlen(login)+1];
	strcpy(this->login,login);
	
	this->pass = new char[strlen(pass)+1];
	strcpy(this->pass,pass);	
	
}

Cliente_registrato::Cliente_registrato(Cliente_registrato &cli):Cliente(cli){
	
	if(this == &cli)
		return;
		
	login = new char[strlen(cli.login)+1];
	strcpy(login,cli.login);
	
	pass = new char[strlen(cli.pass)+1];
	strcpy(pass,cli.pass);	
	
	timestrap = cli.timestrap;
}

const Cliente_registrato &Cliente_registrato::operator=(Cliente_registrato &cli){
	if(this == &cli)
		return *this;
		
		
	delete []login;
	delete []pass;
	
	Cliente::operator=(cli);
		
	login = new char[strlen(cli.login)+1];
	strcpy(login,cli.login);
	
	pass = new char[strlen(cli.pass)+1];
	strcpy(pass,cli.pass);	
	
	timestrap = cli.timestrap;
	
	return *this;	
}

void Cliente_registrato::set_login(const char*login){
	
	delete []this->login;
	
	this->login = new char[strlen(login)+1];
	strcpy(this->login,login);
}

void Cliente_registrato::set_pass(const char *pass){
	
	delete []this->pass;
	
	this->pass = new char[strlen(pass)+1];
	strcpy(this->pass,pass);
	
}

void Cliente_registrato::set_time(int ore,int minuti,int secondi){
	
	Time x(ore,minuti,secondi);
	timestrap = x;
	
}

ostream &operator<<(ostream &os,const Cliente_registrato &cli){
	
	os<<(Cliente&)cli<<" "<<cli.get_login()<<" "<<cli.get_time();
	return os;
	
}

ofstream &operator<<(ofstream &of,const Cliente_registrato &cli){
	of<<(Cliente&)cli<<" "<<cli.get_login()<<" "<<cli.get_time();
	of<<" pass ";
	
	int i = strlen(cli.get_pass());
	
	while(i!=0)
		of<<'*';
	
	return of;	
}

void Cliente_registrato::check(){
	
	char buff[] = {'0','1','2','3','4','5','6','7','8','9','Q','W','A','B','C','D','R','F'};
	
	if(strlen(pass)<7 )
		throw Eccezione("pass scorretta");
	
	for(int j = 0;j<strlen(buff);j++){
		for(int i = 0;i<strlen(pass);i++)
			if(buff[i]==pass[i]){
				cout<<"pass corretta"<<endl;
				return;
			}
	}
	
	throw Eccezione("pass scorretta");
}

istream &operator>>(istream &in,Cliente_registrato &cli){
	
	in>>(Cliente&)cli;
	
	char buff[256];
	
	in.getline(buff,256);
	
	cli.set_login(buff);
	
	in.ignore();
	in.getline(buff,256);
	
	cli.set_pass(buff);
	int x,y,z;
	in>>x;
	in>>y;
	in>>z;
	
	cli.set_time(x,y,z);
	
	return in;
	
}

Cliente_registrato::~Cliente_registrato(){
	delete []pass;
	delete []login;
}


