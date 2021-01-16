#ifndef CLIENTEREGISTRATO
#define CLIENTEREGISTRATO

#include"Cliente.h"
#include"Time.h"

class Cliente_registrato:public Cliente{
	
	private:
		
		char *login;
		char *pass;
		Time timestrap;
		
	public:
	
		Cliente_registrato();
		Cliente_registrato(const char [9],const char*,const char*,const char*,int,int,int);	
		Cliente_registrato(Cliente_registrato &);
		const Cliente_registrato &operator=(Cliente_registrato &);
		virtual ~Cliente_registrato();
		
		const char *get_login()const{return login;}
		const char *get_pass()const{return pass;}
		const Time get_time()const{return timestrap;}
		
		void set_pass(const char*pass);
		void set_login(const char *login);
		void set_time(int ore,int mesi,int secondi);
		
		virtual void check();
		
		friend ostream &operator<<(ostream &os,const Cliente_registrato &);
		friend istream &operator>>(istream &in,Cliente_registrato &);
		friend ofstream &operator<<(ofstream &of,const Cliente_registrato &);
		
};

#endif
