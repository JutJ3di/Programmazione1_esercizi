#include"Indirizzo.h"

Indirizzo::Indirizzo(){
	
	via = "vuoto";
	cap = "vuoto";
	civico = "vuoto";
	city = "vuoto";
}

Indirizzo::Indirizzo(string via,string civico,string cap,string city){
	
	this->via = via;
	this->civico = civico;
	this->cap = cap;
	this->city = city;
	
}

Indirizzo::Indirizzo(const Indirizzo &indi){
	
	if( this == &indi)
		return;
		
	via = indi.via;
	civico = indi.civico;
	cap = indi.cap;
	city = indi.city;	
		
}

const Indirizzo &Indirizzo::operator=(Indirizzo &indi){
	
	if( this == &indi)
		return *this;
		
	via = indi.via;
	civico = indi.civico;
	cap = indi.cap;
	city = indi.city;	
		
	return *this;
}


ostream &operator<<(ostream &os,const Indirizzo &indi){
	
	os<<indi.get_via()<<" "<<indi.get_civico()<<" "<<indi.get_cap()<<" "<<indi.get_city();
	return os;
	
}
