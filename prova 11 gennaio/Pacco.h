#ifndef PACCO
#define PACCO

#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

class Pacco{
	
	private:
		
		int codice;
		char *indirizzo;
		float peso;
		
	public:
	
		Pacco();
		Pacco(int,float,const char*);
		Pacco(const Pacco &);
		const Pacco &operator=(Pacco &);
		~Pacco();
		
		int get_codice()const{return codice;}
		const char *get_indirizzo()const{return indirizzo;}
		float get_peso()const{return peso;}
		
		friend ostream &operator<<(ostream &os,const Pacco &);
		friend istream &operator>>(istream &in,Pacco &);
					
			
	
	
};

#endif
