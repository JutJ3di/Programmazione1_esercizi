#include"Lista.h"

Lista::Lista(){
	
	head = NULL;
	nelem = 0;
	
}


void Lista::push(Pacco &pac){
	
	tmp = new Nodo;
	
	tmp->dato=pac;
	tmp->next = head;
	
	head = tmp;
	nelem++;	
}


void Lista::pop(){
	
	
	tmp = head;

	tmp = NULL;

	head = head->next;
	
	delete tmp;
}

void Lista::push_file(){
	char buff[20148];
	int n;
	file.open("prova.dat");
	
	file>>n;
	
	file.close();

	file.open("prova.dat",ios::in|ios::binary);
	
	if(file.is_open()){
		file.read(buff,256);
	}else
		throw filecc("File non aperto");
	
	file.close();
}

void Lista::print(){
	
	
	tmp = head;
	
	while(tmp!=NULL){
		cout<<tmp->dato<<endl;
		tmp = tmp->next;
	}
	
}

Pacco Lista::top(){
	
	return head->dato;
	
}
