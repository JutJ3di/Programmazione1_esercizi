#include <iostream>
#include "Studente.h"
#include"Registro.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Studente primo("ciro","esposito","L2N45",true);
	Studente secondo("Marco","Pagnozzi","L1N47",false);
	Studente terzo("Giulia","Granata","L3N52",true);
	
	Registro  registro("Matematica","Rossi","3x");
	
	
	primo.set_voto(11);	
		
	secondo.set_voto(6);
		
	terzo.set_voto(7);
	
		
	registro.inserimento(primo);
	registro.inserimento(secondo);
	registro.inserimento(terzo);
		
	
	registro.print();
	
	return 0;
}
