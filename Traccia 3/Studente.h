#ifndef ENTRYREGISTRO
#define ENTRYREGISTRO

#include"Entry.h"

class Studente:public Entry{
	
	private:
		
		bool presente;
		int voto;
		
	public:
	
		Studente();
		Studente(const char *,const char *,const char [5],bool);
		Studente(const Studente &);
		const Studente &operator=(Studente &);
		virtual ~Studente(){}
		
		
		bool set_voto(int voto);
		void set_presente(bool presente){this->presente = presente;}
		
		int get_voto()const{return voto;}
		bool get_presente()const{return presente;}
		
		friend istream &operator>>(istream &in,Studente &);
		friend ostream &operator<<(ostream &os,const Studente &);
		friend ofstream &operator<<(ofstream &of,const Studente &);	
	
};

#endif
