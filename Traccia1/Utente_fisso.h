#ifndef UTENTEFISSO
#define UTENTEFISSO

#include"Utente.h"
#include"Indirizzo.h"

const char off[] = "Appartamento";
const string cit_off = "Napoli";

class Utente_fisso:public Utente{
	
	private:
		
		char *dest;
		Indirizzo indi;
		
	public:
		
		Utente_fisso();
		Utente_fisso(const char[5],const char*,const char[10],const char*,string,string,string,string);
		Utente_fisso(Utente_fisso &);
		const Utente_fisso &operator=(Utente_fisso &);	
		virtual~Utente_fisso();
		
		friend ostream &operator<<(ostream &os,const Utente_fisso &);
		
		virtual void offerta();
	
};

#endif
