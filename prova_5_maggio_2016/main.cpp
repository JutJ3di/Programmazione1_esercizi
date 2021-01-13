#include <iostream>

#include"Myvett.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Immagine imm("Nome",123);
	
	Immagine imm1("colo",32);
	
	Immagine imm2("solo",11);
	
	Myvett vet;
	
	vet.push(imm);
	
	vet.push(imm1);
	
	vet.pop();
	
	vet.push(imm2);
	

	
	vet.order();
	
	vet.print();
	
	
	
	
	
	return 0;
}
