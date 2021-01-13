#ifndef IMMAGINE
#define IMMAGINE

#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

class Immagine{
	
	private:
		char *nome;
		int dim;
		
	public:
		
		Immagine();
		Immagine(const char*,int);
		Immagine(const Immagine &);
		const Immagine &operator=(Immagine &);
		~Immagine();
		
		friend ostream &operator<<(ostream &os,const Immagine &);
		friend ofstream &operator<<(ofstream &of,const Immagine &);
		friend istream &operator>>(istream &in,Immagine &);
		
		const char *get_nome()const{return nome;}
		int get_dim()const{return dim;}
		
		friend bool operator==(const Immagine &x,const Immagine &y);
		friend bool operator<(const Immagine &x,const Immagine &y);
		friend bool operator>(const Immagine &x,const Immagine &y);
		
		void set_nome(const char *nome);
		void set_dim(int dim){this->dim = dim;}
		
		
		
	
};

#endif
