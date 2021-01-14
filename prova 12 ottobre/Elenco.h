#ifndef ELENCO

#define ELENCO

#include"Lettera.h"
#include<string>

class Duplicato{
	
	public:
		
		string duplicato;
		
		Duplicato(string duplicato_t){
		
			duplicato = duplicato_t;
			
		}
		
	
};

class Elenco{
	
	private:
		
		fstream file;
		
		static const int size = 20;
		
		Manoscritto array[size];
	
		int nelem;
		
	public:
	
		Elenco();
		Elenco(Elenco &);
		
		const Elenco &operator=(Elenco &);
		
		~Elenco(){}
		
		void push(Manoscritto &);
		
		bool dupli(Manoscritto &);
		
		void pop();
		
		void print();
		
		bool full(){return (nelem==size);}
		bool empty(){return (nelem==0);}
};

#endif
