#include <iostream>
#include "File.h"
#include "Coda.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	Filem file("cie",23,"ee");
	
	Filem file1("ciro",234,"sdd");

	Coda array;
	
	array.append(file);
	array.append(file1);
	
	array.display();
	
	
	
	array.pop();
	
	
	
	return 0;
}
