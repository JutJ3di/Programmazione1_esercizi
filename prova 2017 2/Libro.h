#ifndef LIBRO
#define LIBRO

#include"Oggetto.h"

class Libro:public Oggetto{
	
	private:
		char *titolo;
		int numpag;
	
	public:
		
		Libro();
		Libro(int,const char *,const char*,const char*,int);
		Libro(const Libro &);
		const Libro &operator=(Libro &);
		~Libro();
		
		
		inline const char *get_titolo()const{return titolo;}
		inline int get_numpag()const{return numpag;}
		
		inline void set_numpag(int n){numpag = n;}
		inline void set_titolo(const char* titolo_t);
		
		friend ostream &operator<<(ostream &os,const Libro &);
		friend istream &operator>>(istream &in,Libro &);
	
};

#endif
