#include <iostream>


#include"Garage.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Garage garage;
	


	
	Veicolo veicolo("automobile","ciro");
	

	Moto moto("moto","ducati","naked");

	try{
	
	
	garage.immissione(veicolo);
	
		
	}catch(myecc e){
		
		cout<<e.ecc;
		
	}

	garage.display();

	
	
	
	return 0;
}
