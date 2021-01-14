#include <iostream>
#include"Lista.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Pacco pacco(12,32.42,"Piazza");
	Pacco pacco1(2,34.12,"via");
	Pacco pacco2(2,32.12,"NM");
	
	
	Lista vet;
	
try{

	vet.push(pacco);
	vet.push(pacco2);
	cout<<vet.top()<<endl;
	
	vet.pop();
	
	vet.push(pacco1);
	vet.print();
	
}catch(filecc e){
	
	cout<<e.ecc<<endl;
	
}	
	return 0;
}
