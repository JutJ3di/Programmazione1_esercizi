#ifndef UTENTE
#define UTENTE

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Utente{
	
	protected:
		
		char *codice;
		char *inte;
		char *num;
		
	public:
	
		Utente();
		Utente(const char [5],const char*,const char[10]);
		Utente(const Utente &);
		const Utente &operator=(Utente &);
		virtual ~Utente();
		
		const char *get_codice()const{return codice;}
		const char *get_inte()const{return inte;}
		const char *get_num()const{return num;}
		
		friend ostream &operator<<(ostream &os,const Utente &);
		
		virtual void offerta() = 0;
		
};


#endif
