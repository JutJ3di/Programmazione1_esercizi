#ifndef OGGETTO
#define OGGETTO

#include<iostream>
#include <fstream>
#include<cstring>

using namespace std;

class Oggetto{
	
	private:
		
		int codice;
		char *des;
		char *forma;
		
	public:
	
		Oggetto();
		Oggetto(int,const char*,const char*);
		Oggetto(const Oggetto &);
		const Oggetto &operator=(Oggetto &);
		~Oggetto();
		
		void set_des(const char *des_t);
		void set_forma(const char *forma_t);
		inline void set_codice(int codice_t){codice = codice_t;}
		
		int get_codice()const{return codice;}
		const char *get_forma()const{return forma;}
		const char *get_des()const{return des;}
		
		friend ostream &operator<<(ostream &os,const Oggetto &);	
		friend istream &operator>>(istream &in,Oggetto &);
		
		
	
};

#endif
