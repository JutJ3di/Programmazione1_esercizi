#ifndef CODA
#define CODA

#include "File.h"

class Coda{
	
	private:
		
		int nelem,r,w;
		int size;
		fstream file;
		Filem array[20];
	
	public:
			
		Coda();
		Coda(Coda &);
		const Coda &operator=(Coda &);
		
		void append(Filem &);
		
		void pop();
		
		bool full(){return (nelem==size);}
		bool empty(){return (nelem==0);}
		
		void on_file();
		void display();
		
		int get_element()const{return nelem;}
		
	
};

#endif
