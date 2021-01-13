#ifndef MYVETT
#define MYVETT
#include"Vettore.h"
#include<cstring>
#include<fstream>

class Myvett :public Vettore{
	
	public:
		Myvett():Vettore(){}
		Myvett(Myvett &vet):Vettore(vet){if(this==&vet)return;}
		const Myvett &operator=(Myvett &);
		
		virtual ~Myvett(){}
		
		
		void order();
		void binary_search(Immagine &x);
		bool is_order();
		void print_on_file(const char *);
	
};

#endif
