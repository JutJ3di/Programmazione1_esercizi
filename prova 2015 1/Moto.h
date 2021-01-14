#ifndef MOTO
#define MOTO

#include"Veicolo.h"

class Moto:public Veicolo{
	
	private:
		
		char *tipo;
		
	public:
		
		Moto();
		Moto(const char*,const char*,const char*);
		const Moto &operator=(Moto &);
		Moto(const Moto &);
	
		virtual	~Moto();
		
	
		
		friend ostream &operator<<(ostream &os,const Moto&);
		friend istream &operator>>(istream &in,Moto&);
	
	
};

#endif
