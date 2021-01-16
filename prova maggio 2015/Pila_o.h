#ifndef PILA_OGGETTI
#define PILA_OGGETTI

#include"Pila.h"
#include"myecc.h"

class Pila_o:public Pila{
	
	private:
		
		char *forma_t;
	
	public:
		
		Pila_o();
		Pila_o(int ,const char *);
		Pila_o(Pila_o &);
		const Pila_o &operator=(Pila_o &);
		~Pila_o();
		
		virtual void push(T &);
		
		bool check(T &);
		
		
};

#endif
