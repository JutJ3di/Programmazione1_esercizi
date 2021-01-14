#ifndef LISTA
#define LISTA

#include"Pacco.h"




class filecc{
	
	public :
		string ecc;
		filecc(string ecc_t){
			
			ecc = ecc_t;
			
		}
	
	
};






typedef struct nodo Nodo;

struct nodo{
	
	Nodo * next;
	
	Pacco dato;
	
};






class Lista{
	
	private:
	
	Nodo *head;
	Nodo *tmp;
	int nelem;

	fstream file;

	public:

		Lista();
		
		
		void push(Pacco &);
		void pop();
		bool empty(){return (nelem ==0);}
		
		void push_file();
		
		void print();
		
		Pacco top();
		
};

#endif
