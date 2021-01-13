#ifndef UTENTEPOSTA
#define UTENTEPOSTA

#include"Utente.h"

class Utente_posta:public Utente{
	
	private:
		
		char *email;
		
		
	public:
	
		Utente_posta();
		Utente_posta(const char *,const char *,const char *,int,int,int);
		Utente_posta(const Utente_posta &);
		const Utente_posta &operator=(Utente_posta &);
		virtual ~Utente_posta();
		
		virtual void controllo();
			
		friend ostream &operator<<(ostream &os,const Utente_posta &);
		friend istream &operator>>(istream &in,Utente_posta &);
		
		friend bool operator==(const Utente_posta &x,const Utente_posta &y){return strcmp(x.cf,y.cf);}
		friend bool operator!=(const Utente_posta &x,const Utente_posta &y){return (strcmp(x.cf,y.cf)!=0);}	
	
};

#endif
