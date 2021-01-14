#include <iostream>

#include"Lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	list vet;
	
	Processo ele(12,"pds",1,"ok",'R');
	
	Processo ele1(12,"dds",0,"lol",'R');
	
	try{

		
	vet.append(ele);
	vet.append(ele1);
	}catch(myecc e){
		
		cout<<e.ecc<<endl;
		
	}
	vet.display();

	return 0;
}
