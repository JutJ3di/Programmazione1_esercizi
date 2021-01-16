#ifndef TEL
#define TEL

#include "Oggetto.h"

class Cell:public Oggetto{
	
	private:
		
		char * modello;
		float costo;
		
	public:
	
		Cell();
		Cell(int,const char*,const char*,const char*,float);
		Cell(const Cell &);
		const Cell &operator=(Cell &);
		~Cell();
		
		inline const char *get_modello()const{return  modello;}
		inline float get_costo()const{return costo;}
		
		inline void set_costo(float costo_t){costo = costo_t;}	
		void set_modello(const char *modello_t);
		
		friend ostream &operator<<(ostream &os,const Cell &);
		friend istream &operator>>(istream &in,Cell &);
		
		
};

#endif
