#ifndef CARTELLA
#define CARTELLA

#include"Documento.h"

class Cartella:public Documento{
	
	private:
		
		char *nome;
		char *cognome;
		char *reparto;
	
	public:
	
		Cartella();
		Cartella(const char *,int,const char*,const char*,const char*);
		Cartella(const Cartella &);
		const Cartella &operator=(Cartella &);
		virtual ~Cartella();
		
		friend ostream &operator<<(ostream &os,const Cartella &);
		friend istream &operator>>(istream &in,Cartella &);
		friend ofstream &operator<<(ofstream &of,const Cartella &);
		
		void set_nome(const char *nome);	
		void set_cognome(const char*cognome);
		void set_reparto(const char*reparto);
		
		const char *get_nome()const{return  nome;}
		const char *get_cognome()const{return cognome;}
		const char *get_reparto()const{return reparto;}

};

#endif
