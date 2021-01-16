#include <iostream>
#include"Pila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	Oggetto ogg(12,"lollo","triangolo");
	Oggetto ogg1(23,"less","quadrato");
	
	Oggetto ogg3;
	ogg3 = ogg;
	
	Pila vet;
	
	try{
	
		vet.insert(ogg);
	
		vet.insert(ogg1);

		vet.insert(ogg3);
		
	}catch(bad_item x){
		cout<<x.e<<endl;
	}
	
	vet.print();
	vet-1;
	vet.print();


	return 0;
}
