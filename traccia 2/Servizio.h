#ifndef SERVIZIO
#define SERVIZIO
#include"Prodotto.h"
class Servizio:public Prodotto{
	
	private:
		
		char *tipo;
		
	public:
	
		Servizio();
		Servizio(const char id[5],const char *,float,const char *);
		Servizio(const Servizio &);
		const Servizio &operator=(Servizio &);
		virtual ~Servizio();	
	
		virtual float imposta();
};

#endif
