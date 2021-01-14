#ifndef PACCO
#define PACCO

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Pacco{
	
	private:
		
		char *des;
		float peso;
		char *forma;
		
	public:
	
		Pacco();
		Pacco(const char*,float,const char*);
		Pacco(const Pacco &);
		const Pacco &operator=(Pacco &);
		~Pacco();
		
		const char *get_des()const{return des;}
		const char *get_forma()const{return forma;}
		float get_peso()const{return peso;}
		
		friend ostream &operator<<(ostream &os,const Pacco &);
		friend istream &operator>>(istream &in,Pacco &);
		
			
	
};

#endif
