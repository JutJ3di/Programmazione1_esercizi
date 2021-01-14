#ifndef BENE
#define BENE

#include"Prodotto.h"

class Bene:public Prodotto{
	
	private:
		
		bool ne;
		char *des;
		
	public:
	
		Bene();
		Bene(const char [5],const char *,float,bool,const char*);
		Bene(const Bene &);
		const Bene &operator=(Bene &);
		virtual ~Bene();
		
		virtual float imposta();		
	
};

#endif
