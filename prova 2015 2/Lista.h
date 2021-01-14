#ifndef LIFOLIST
#define LIFOLIST

#include"Processo.h"

typedef struct nodo Nodo;

class myecc{
	
	public:
		
		char *ecc;
		
		myecc(const char *ecc_t){
			ecc = new char[strlen(ecc_t)];
			strcpy(ecc,ecc_t);
			
		}
	
};

struct nodo{
	
	Processo dato;
	Nodo *next;
	
};

class list{
	
	private:
		
		Nodo *head;
		Nodo *tail;
		int nelem;
		
	public:
	
		list();	
		
		void append(Processo &);
		void display();
		int get_p()const{return nelem;}
		bool duplicato(Processo &);
		void pop();
		bool empty();
		
		

};


#endif
