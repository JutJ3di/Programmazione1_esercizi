#ifndef FOTO
#define FOTO
#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class Fotografia{
	
	
	private:
		
		char *titolo;
		char *formato;
		
	public:
	
		Fotografia();
		Fotografia(const char*,const char*);
		Fotografia(const Fotografia&);
		const Fotografia &operator=(const Fotografia &);
		~Fotografia();
		
		inline const char * get_titolo()const {return titolo;}
		inline const char * get_formato()const{return formato;}
		
		void set_formato(const char *formato_t);
		void set_titolo(const char *titolo_t);
		
		friend ostream &operator<<(ostream &os,const Fotografia&);
		friend istream &operator>>(istream &in,Fotografia&);
		
		friend ofstream &operator<<(ofstream &of,const Fotografia &);	
	
	
};

#endif
