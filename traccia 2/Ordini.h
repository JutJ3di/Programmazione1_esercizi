#ifndef ORDINI
#define ORDINI

#include"Servizio.h"
#include"Bene.h"

typedef struct record{
	char id[5];
	int numero;
	float costo_effettivo;
}Record;

class Ordine{
	
	private:
		
		static const int size = 20;
		Record array[size];
		int nelem;
		
	public:
			
		Ordine();
		Ordine(Ordine &);
		const Ordine &operator=(Ordine &);
		
		void inserimento(Prodotto &,int);
		float costo_vero();
	
};


#endif
