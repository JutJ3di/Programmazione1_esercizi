#ifndef BRANO
#define BRANO


#include"File.h"

class Branom:public Filem{
	
	private:
	
		char*brano;
	
		char*inter;
	
		float durata;
	
	public:
		
		Branom();
		Branom(const char *,int ,const char*,const char*,const char*,float);
		Branom(const Branom &);	
		const Branom &operator=(Branom &);
		~Branom();
		
		friend ostream &operator<<(ostream &os,const Branom &);
		friend istream &operator>>(istream &in,Branom &);
		
		virtual void mem_dati(fstream &file);
		
	
};

#endif
