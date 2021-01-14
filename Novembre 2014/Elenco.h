#ifndef ELENCO
#define ELENCO
#include"Cartella.h"

class Elenco{
	
	private:
		
		int nelem;
		int size;
		Cartella *array;
	
		fstream file;
		
		void order();
		void morespace();
	
	public:
	
		Elenco();
		Elenco(int);
		Elenco(Elenco &);	
		const Elenco &operator=(Elenco &);
		~Elenco();
		
		bool empty(){return (nelem == 0);}
		bool full(){return (size == 0);}
		 
		void elimina(Cartella &e);
		void orderInsert(Cartella &e);
		
	
		
		bool inElenco(Cartella &e);
		int Posizione(Cartella &ele);
		
		inline void pop(){nelem--;}
		
		void print();
		void show();
		
		
};

#endif
