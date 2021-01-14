#ifndef PROCESSO
#define PROCESSO


#include"Attivita.h"

class Processo:public Attivita{
	
	private:
		
		char *nome;
		char stato;
		
	public:
	
		Processo();
		Processo(int,const char*,bool,const char *,char);
		
		Processo(const Processo &);
		
		~Processo();
		
		const Processo &operator=(Processo &);
		
		void set_nome(const char*nome_t);
		void set_stato(char stato_t);
		
		virtual void attiva();
		
		const char *get_nome()const{return nome;}
		char get_stato()const{return stato;}	
		
		friend ostream &operator<<(ostream &os,const Processo &);
		friend istream &operator>>(istream &in,Processo &);
		
		
		
	
};

#endif
