#ifndef LETTERA
#define LETTERA

#include"Manoscritto.h"
class Lettera:public Manoscritto{
	
	private:
		
		char*mittente;
		char*destinatario;
		
	public:
	
		Lettera();
		Lettera(int,const char*,int,const char*,const char*,const char*);
		Lettera(const Lettera &);
		const Lettera &operator=(Lettera &);
		~Lettera();
		
		virtual void visualizza();
		virtual void memorizza();
		
		
		
			
	
};
#endif
