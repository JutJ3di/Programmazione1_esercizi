#ifndef CONTENITORE
#define CONTENITORE

#include"Oggetto.h"

#include"myecc.h"

typedef Oggetto T;

class Pila{
	
	private:
		
		static const int size = 20;
		T array[size];
		int nelem;
		
	public:
	
		Pila();
	
		void insert(T &x);
			
		bool full(){return (nelem == size);}
		bool empty(){return (nelem == 0);}
		
		void top(){cout<<array[nelem-1]<<endl;}

		void operator-(int n){if(nelem-n<0)return;
		nelem = nelem-n;}
		
		inline void pop(){if(!empty())nelem--;}
		
		bool dupli(T &);
		
		void print();
		
	
};


#endif
