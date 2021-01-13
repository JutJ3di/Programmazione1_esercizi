#ifndef UTENTE
#define UTENTE


#include<iostream>

#include<cstring>

#include<cstring>

#include"Bad_data.h"
#include"Data.h"

const int size = 17;

using namespace std;

class Utente{
	
	protected:
		
		char cf[size];
		char *cognome;
		Data data;
		virtual void controllo();
		
	public:
	
		Utente();
		Utente(const char *,const char *,int,int,int);
		Utente(const Utente &);
		const Utente &operator=(Utente &);
		virtual ~Utente();
		
		friend ostream &operator<<(ostream &os,const Utente &);
		friend istream &operator>>(istream &in,Utente &);
		
		friend bool operator==(const Utente &x,const Utente &y){return strcmp(x.cf,y.cf);}
		friend bool operator!=(const Utente &x,const Utente&y){return (strcmp(x.cf,y.cf)!=0);}
		
	
	
};

#endif
