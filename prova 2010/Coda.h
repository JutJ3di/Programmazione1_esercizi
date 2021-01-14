#ifndef CODA
#define CODA

#include"Fotografia.h"

class myecc{
	
	public:
		char *ecc;
		myecc(const char *ecc_t)
		{
			ecc = new char[strlen(ecc_t)+1];
			strcpy(ecc,ecc_t);
		}
		
	
};

class Coda{
	
	private:
		
		int r;
		int w;
		int nelem;
		static const int size = 20;
		Fotografia array[size];
		char *namefile;
		
		
	public:
		
		Coda();
		Coda(const char*);
	
		
		bool full();
		bool empty();
		
		void append(Fotografia &);
		void pop();
		
		void stampa();
			
		
	
	
};

#endif
