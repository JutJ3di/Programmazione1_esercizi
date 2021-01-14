#include <iostream>

#include"Elenco.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Elenco vet;

	Manoscritto man(22,"giacoloo",23,"testo");
	
	Manoscritto man2(man);
	
	Manoscritto man3(23,"cdsd",33212,"lol");
	
	try{
		
		vet.push(man);
		vet.push(man3);
		vet.push(man2);
		
	}catch(Duplicato e){
			cout<<e.duplicato<<endl;
	}
	vet.print();
	return 0;
}
