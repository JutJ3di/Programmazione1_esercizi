#include"Attivita.h"

Attivita::Attivita(){
	
	PID = 0;
	
	des = NULL;
	
	start = 0;
	
}


Attivita::Attivita(int pid_t,const char *des_t,bool start_t){
	
	PID = pid_t;
	
	des = new char[strlen(des_t)+1];
	strcpy(des,des_t);
	
	start = start_t;
	
}

Attivita::Attivita(const Attivita &att){
	
	if(this==&att)
		return;
		
		
	PID = att.PID;
	
	des = new char[strlen(att.des)+1];
	strcpy(des,att.des);
	
	start = att.start;	
	
}

const Attivita &Attivita::operator=(Attivita &att){

	if(this==&att)
		return *this;
		
	if(des)
		delete []des;	
		
	PID = att.PID;
	
	des = new char[strlen(att.des)+1];
	strcpy(des,att.des);
	
	start = att.start;	
	
	return *this;

}

Attivita::~Attivita(){
	
	delete []des;
	
}


void Attivita::set_des(const char* des_t){
	
	if(des)
		delete []des;
		
	des = new char[strlen(des_t)+1];
	strcpy(des,des_t);	
	
}


istream &operator>>(istream &in,Attivita &att){
	
	in>>att.PID;
	
	char buff[256];
	
	in.getline(buff,256);
	
	att.des = new char [strlen(buff)+1];
	strcpy(att.des,buff);
	
	in>>att.start;
	
	return in;
}

ostream &operator<<(ostream &os,const Attivita &att){
	
	os<<att.PID<<" "<<att.des<<" "<<att.start<<" ";
	return os;
	
}

