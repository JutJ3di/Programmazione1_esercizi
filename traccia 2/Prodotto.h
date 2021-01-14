#ifndef PRODOTTO
#define PRODOTTO

#include<cstring>
#include<iostream>
#include<string>

using namespace std;

class Prodotto{
	
	protected:
		
		char id[5];
		char *genere;
		float costo;
		
	public:
	
		Prodotto();
		Prodotto(const char [5],const char *,float);
		Prodotto(const Prodotto &);
		const Prodotto &operator=(Prodotto &);
		virtual ~Prodotto();
		
		const char *get_id()const{return id;}
		const char *get_genere()const{return genere;}
		float get_costo()const{return costo;}
		
		virtual float imposta();
		
};

#endif

