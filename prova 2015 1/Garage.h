#ifndef GARAGE
#define GARAGE

#include<iostream>
#include<cstring>

#include"Moto.h"
#include"Auto.h"


class  myecc{
	
	public:
		char* ecc;
		
		myecc(const char *ecc_t){
			strcpy(ecc,ecc_t);
			
		}
	
};

using namespace std;

class Garage{
	
	
	private:
		
		int size;
		
		Veicolo *vec;
		
		int nelem;
		
	public:
		
		Garage();
		
		void immissione(Veicolo&);

		void estrazione(int n);	
		void pop();

		void display();
		void file(const char *nome_file);	
		
		inline bool full(){if(nelem == size) return true;}	
	
	
};

#endif
