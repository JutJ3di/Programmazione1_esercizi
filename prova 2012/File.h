#ifndef FILEM
#define FILEM

#include<iostream>
#include<cstring>
#include <fstream>

using namespace std;

class Filem{
	
	protected:
		
		char *url;
		char *formato;
		int kbyte;
		
	public:
		
		Filem();
		Filem(const char *,int ,const char*);
		Filem(const Filem &);
		const Filem &operator=(Filem &);
		virtual ~Filem();	
		
		friend ostream &operator<<(ostream &os,const Filem &);
		friend istream &operator>>(istream &in,Filem &);
		
		virtual void mem_dati(fstream &file);
	
};

#endif
