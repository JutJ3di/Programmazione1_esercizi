#include"Lista.h"

list::list(){
	
	tail = NULL;
	head = NULL;
	nelem = 0;
}


void list::append(Processo &pro){
	
	
	if(!duplicato(pro)){
		if(tail == NULL){
		
		
			tail = new Nodo;
		
		
			tail->dato=pro;
			tail->next=NULL;
	
			
	
			head = tail;
	
	
			nelem++;
		 
		}
		else{
			
			Nodo *nuovo = new Nodo;
		
			tail->next = nuovo;
			nuovo->dato=pro;
			nuovo->next=NULL;
	
			tail = head;	
	
			nelem++;			
			
		}

	}else
		throw myecc("ERRORE DUPLICATO");
	
	
}

void list::display(){
	
	Nodo *tmp;
	
	tmp = head;
	
	while( tmp != NULL ){
		
		cout<<tmp->dato<<" ";
		tmp = tmp->next;
		
	}
	
}

void list::pop(){
	
	if(empty())
		return;
		
	Nodo *tmp = head;	
		
	if(tail->next!=NULL){
		
	}
	
	nelem--;		
}

bool list::empty(){
	
	if(head == NULL)
		return true;
	return false;	
	
}

bool list::duplicato(Processo &pro){
	
	Nodo *tmp = head;
	
	while(tmp!=tail){
		if(tmp->dato.get_pid()==pro.get_pid()){
			return true;
		}
	}
	
	return false;
	
}
