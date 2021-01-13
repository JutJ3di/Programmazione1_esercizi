#ifndef VETTORE
#define VETTORE

#include<iostream>
#include"Immagine.h"

using namespace std;

typedef Immagine T;

class Vettore{

	protected:
	
		int size;
		int nelem;
		T *array;
		
	public:

		Vettore();
		Vettore(Vettore &);
		const Vettore &operator=(Vettore &);
		virtual ~Vettore();
		
		T &operator[](int);
		
		bool full(){return (nelem == size);}
		bool empty(){return (nelem ==0);}
		
		void push(T &);
		void pop(){if(!empty()) nelem--;}
		void print();
		
		
		int get_size()const{return size;}
		
				

};

#endif
