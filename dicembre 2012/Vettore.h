#ifndef VETTORE
#define VETTORE

#include"Pacco.h"


class myecc{
	
	public:
		string ecc;
		myecc(string e){
			
			ecc = e;
			
		}
	
};

class Vettore{
	
	private:
		
		int nelem;
		Pacco *v;
		int size;
		
	public:
		
		Vettore();
		Vettore(int);
		Vettore (const Vettore &);
		const  Vettore &operator=(Vettore &);
		~Vettore();
		
		void push(Pacco &pa);
		inline void pop(){nelem--;}
		
		inline const Pacco* get_v()const{return v;}
		inline int get_size()const{return size;}
		inline int gte_nelem()const{return nelem;}
		
		
		inline Pacco &operator[](int index){return v[index];}
		
		Pacco &access(int index);
		
		void elimina();
		
		inline bool full(){return (nelem == size);}
		inline bool empty(){return (nelem == 0);}
		
		friend 	ostream &operator<<(ostream &os,const Vettore &);
		friend 	istream &operator>>(istream &in,Vettore &);
		
		
		
	
			
	
};

#endif
