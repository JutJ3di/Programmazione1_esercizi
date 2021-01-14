#ifndef MANOSCRITTO
#define MANOSCRITTO

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Manoscritto{
	
	protected:
		
		int codice;
		char *autore;
		int numpag;
		char *formato;
		
	public:
	
		Manoscritto();
		Manoscritto(int,const char*,int,const char*);
		Manoscritto(const Manoscritto &);
		const Manoscritto &operator=(Manoscritto &);
		virtual ~Manoscritto();
				
		virtual void visualizza();
		virtual void memorizza();
		
		inline int get_codice()const{return codice;}
		
	
};

#endif
