#ifndef VEICOLO
#define VEICOLO

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Veicolo{
	
	protected:
		
		char * nome_tipo;
		char * marca;
		
		
	public:
		Veicolo();
		Veicolo(const char*,const char*);
		Veicolo(const Veicolo &);
		const Veicolo &operator=(Veicolo &);
		virtual ~Veicolo();
		
		virtual const char * totext();
		
		const char *get_veicolo()const{return nome_tipo;}
		
		friend ostream &operator<<(ostream &os,const Veicolo &);
		friend istream &operator>>(istream &in,Veicolo &);
		friend ofstream &operator<<(ofstream &of,const Veicolo &);
	
};
#endif
