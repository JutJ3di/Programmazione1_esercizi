#include"Auto.h"

Auto::Auto(const char *nome_t,const char *marca_t,const char *ali_t):Veicolo(nome_t,marca_t){
	
	ali = new char[strlen(ali_t)+1];
	strcpy(ali,ali_t);
	
}
Auto::Auto():Veicolo(){
	ali = NULL;
}

Auto::~Auto(){
	delete []ali;
}

Auto::Auto(const Auto&a):Veicolo(a){
	if(this ==&a)
		return ;
	
	delete []ali;
	
	ali = new char[strlen(a.ali)+1];
	strcpy(ali,a.ali);
		
		
}

const Auto & Auto::operator=(Auto&a){
		
	if(this ==&a)
		return *this; ;
	
	
	delete []ali;
	
	Veicolo ::operator =(a);
	
	ali = new char[strlen(a.ali)+1];
	strcpy(ali,a.ali);
		
	return *this;	
}

ostream &operator<<(ostream &os,const Auto &a){
	
	os<<(Veicolo&)a<<" "<<a.ali<<endl;
	return os;
	
}

istream &operator>>(istream &in,Auto &a){
	
	in>>(Veicolo&)a;
	
	char buff[256];
	
	in>>buff;
	a.ali = new char[strlen(buff)+1];
	strcpy(a.ali,buff);
	return in;	
}
