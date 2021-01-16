#ifndef OGGETTO
#define OGGETTO

#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

class Oggetto{
	
	
	protected:
		
		int codice;
		char *des;
		char *forma;
		
	public:
	
		Oggetto();
		Oggetto(int,const char*,const char*);
		Oggetto(const Oggetto &);
		const Oggetto &operator=(Oggetto &);
		
		
		inline int get_codice()const{return codice;} 
		inline const char *get_des()const{return des;}
		inline const char *get_forma()const{return forma;}
		

		inline void set_codice(int n){codice = n;}
		inline void set_forma(const char *forma_t);
		inline void set_des(const char *des_t);

		friend bool operator==(const Oggetto &x,const Oggetto &y){return (x.codice == y.codice)==0;}
		
		

		friend ostream &operator<<(ostream &os,const Oggetto &);
		friend istream &operator>>(istream &in,Oggetto &);
		
		
		
		virtual ~Oggetto();
};

#endif
