#ifndef UTENTEMOBILE
#define UTENTEMOBILE

#include<string>
#include"Utente.h"
#include"Eccezione.h"

const string offe ="L2";


class Utente_mobile:public Utente{
	
	private:
		
		string profilo;
		
	public:
	
		Utente_mobile();
		Utente_mobile(const char[5],const char*,const char[10],string);
		Utente_mobile(const Utente_mobile &);
		const Utente_mobile &operator=(Utente_mobile &);
		virtual ~Utente_mobile(){}
		
		void formato();
		
		virtual void offerta();
		
		friend ostream &operator<<(ostream &os,const Utente_mobile &);
	
};


#endif
