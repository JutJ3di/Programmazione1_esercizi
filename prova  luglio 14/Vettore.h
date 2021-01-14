#ifndef VETTORE
#define VETTORE

#include"Rileva.h"

class Vettore{
	
	private:
		
		int nelem;
		Rileva *array;
		int size;
		
		void morememory();
		
	public:	
	
		Vettore();
		Vettore(const Vettore &);
		const Vettore &operator=(const Vettore &);
		virtual ~Vettore(){delete []array;}
		
		void push(Rileva &);
		void pop(){if(!empty())nelem--;}
		Rileva top(){if(!empty())return array[nelem--];}
		bool empty(){return (nelem == 0);}
		bool full(){return (nelem == size);}	
		
		inline void stampa(){for(int i = 0;i<nelem;i++)cout<<array[i]<<endl;}
		
};

#endif
