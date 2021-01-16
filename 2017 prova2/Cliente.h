#ifndef CLIENTE
#define CLIENTE

#include<iostream>
#include<fstream>
#include<cstring>



using namespace std;


class Eccezione{
	
	public:
		
		string errore;
		Eccezione(string errore){
			this->errore = errore;
		}
	
};

class Cliente{
	
	protected:
		
		char codice[9];
		char *profilo;
		
	public:
	
		Cliente();
		Cliente(const char [9],const char*);
		Cliente(const Cliente &);
		const Cliente &operator=(Cliente &);
		virtual ~Cliente();
		
		const char *get_profilo()const{return profilo;}
		const char *get_codice()const{return codice;}
			
		inline void set_codice(const char codice[9]){strcpy(this->codice,codice);}
		void set_profilo(const char*profilo);
		
		virtual void check();
		
		friend bool operator==(Cliente &x, Cliente &y){return (strcpy(x.codice,y.codice)==0);}
		friend bool operator!=(Cliente &x, Cliente &y){return (strcpy(x.codice,y.codice)!=0);}
		
		friend ostream &operator<<(ostream &os,const Cliente &);
		friend istream &operator>>(istream &in,Cliente &);
		friend ofstream &operator<<(ofstream &of,const Cliente &);
	
};

#endif
