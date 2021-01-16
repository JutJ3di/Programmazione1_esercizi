#ifndef PILA
#define PILA

#include"Oggetto.h"


typedef struct Oggetto T;

class Pila{
	
	protected:
		
		int nelem;
		int size;
		T *array;
		
		
	public:
	
		Pila();
		explicit Pila(int);
		
		Pila(Pila &);
		
		const Pila &operator=(Pila &);
		
		virtual ~Pila();
		
		
		bool check(T &);
		
		virtual void push(T &);
		
	 	void print();
		
		inline void pop(){nelem --;}
		
		
		
			
		
		
	
};

#endif
