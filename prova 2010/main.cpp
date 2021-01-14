#include <iostream>
#include"Coda.h"
#include"Fotografia.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Fotografia foto("titolo","formato");
	
	Fotografia fota("loll","yess");
	
	Coda vec;
	
	try{
		
	
	vec.append(foto);
	vec.pop();
	
	vec.append(fota);
	
	
	}catch(myecc e){
		cout<<e.ecc<<endl;	
	}

	vec.stampa();
	

	return 0;
}
