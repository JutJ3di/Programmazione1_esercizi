#ifndef ENTRY
#define ENTRY
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Entry{
	
	protected:
		
		char *nome;
		char *cognome;
		char id[6];
		
	public:
	
		Entry();
		Entry(const char *,const char *,const char [5]);	
		Entry(const Entry &);
		const Entry &operator=(Entry &);
		virtual ~Entry();
		
		const char *get_nome()const{return nome;}
		const char *get_cognome()const{return cognome;}
		const char *get_id()const{return id;}
		
		void set_nome(const char *nome);
		void set_cognome(const char *cognome);
		void set_id(const char id[5]){strcpy(this->id,id);}
		
		friend ostream &operator<<(ostream &os,const Entry &);
		friend istream &operator>>(istream &in,Entry &);
	
};

#endif

