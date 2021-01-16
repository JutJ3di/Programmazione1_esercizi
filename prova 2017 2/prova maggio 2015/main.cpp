#include <iostream>
#include"Pila_o.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Pila_o pila(6,"testo");
	Pila_o pila1(3,"nuovo");
	Pila_o pila2(1,"cosa");
	
	Oggetto ele(23,"prova","testo");
	Oggetto ele1(24,"proc","nuovo");
	Oggetto ele2(12,"sass","cosa");
	
	Pila *ptr;
	ptr = &pila;
	Pila *ptr2 ;
	ptr2 = &pila2;
	
	
	try{
		ptr->push(ele);
		
		ptr2->push(ele2);
		
		
	}catch(bad_insert e){
		
		cout<<e.e<<endl;
		
	}
		
	return 0;
}
