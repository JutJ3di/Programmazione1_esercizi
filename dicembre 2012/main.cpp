#include <iostream>
#include"Vettore.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Vettore vet(5);
	
	Pacco pac("prova",0.3,"forma");
	
	Pacco pa("niovo",0.3,"louona");
	
	Pacco p("nioos",0.023,"alossl");
	
	vet.push(pac);
	vet.push(pa);
	vet.push(p);
	
	cout<<vet; 
	
	
	return 0;
}
