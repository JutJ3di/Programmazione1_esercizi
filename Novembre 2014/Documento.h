#ifndef DOCUMENTO
#define DOCUMENTO

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Documento{
	
	protected:
		
		char *autore;
		int id;
		
	public:
	
		Documento();
		Documento(const char*,int);
		Documento(const Documento &);
		const Documento &operator=(Documento &);
		virtual ~Documento();	
	
		const char *get_autore()const{return autore;}
		int get_id()const{return id;}

		void set_autore(const char *autore);
		void set_id(int id){this->id = id;}
		
		friend ostream &operator<<(ostream &os,const Documento &);
		friend istream &operator>>(istream &in,Documento &);
		friend ofstream &operator<<(ofstream &of,const Documento &);

		friend bool operator==(const Documento &doc1,const Documento &doc2){return (doc1.id == doc2.id);}
		friend bool operator>(const Documento &doc1,const Documento &doc2){return (doc1.id>doc2.id);}
		friend bool operator<(const Documento &doc1,const Documento &doc2){return (doc1.id<doc2.id);}


};

#endif
