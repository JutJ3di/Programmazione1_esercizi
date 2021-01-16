#include"Time.h"

Time::Time(){
	
	ore = secondi = minuti= 0;
}

Time::Time(int ore,int minuti,int secondi){
	
	this->ore = ore;
	this->minuti = minuti;
	this->secondi = secondi;
	
}

Time::Time(const Time &ti){
	
	if(this == &ti)
		return;
		
	ore = ti.ore;
	minuti  = ti.minuti;
	secondi = ti.secondi;	
	
}

const Time &Time::operator=(Time &ti){
	
	if(this == &ti)
		return *this;
		
	ore = ti.ore;
	minuti  = ti.minuti;
	secondi = ti.secondi;	
	
	return *this;	
	
}

ostream &operator<<(ostream &os,const Time &ti){
	os<<ti.get_ore()<<":"<<ti.get_minuti()<<":"<<ti.get_secondi();
	return os;
}

ofstream &operator<<(ofstream &of,const Time &ti){
	
	of<<ti.get_ore()<<":"<<ti.get_minuti()<<":"<<ti.get_secondi();
	return of;	
}

istream &operator>>(istream &in,Time &ti){
	in>>ti.ore;
	in>>ti.minuti;
	in>>ti.secondi;
	
	return in;	
	
}
