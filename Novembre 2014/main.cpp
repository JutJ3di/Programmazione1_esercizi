#include <iostream>
#include"Elenco.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	Elenco vet(2);
	
	Cartella car("prova",232,"eee","sasd","sa");
	
	vet.orderInsert(car);
	vet.show();
	
	return 0;
}
