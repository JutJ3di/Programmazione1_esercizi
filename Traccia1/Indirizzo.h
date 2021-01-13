#ifndef INDIRIZZO
#define INDIRIZZO

#include<iostream>
#include<string>
using namespace std;

class Indirizzo{
	
	private:
		
		string via;
		string civico;
		string cap;
		string city;
		
	public:
	
		Indirizzo();
		Indirizzo(string,string,string,string);
		Indirizzo(const Indirizzo &);
		const Indirizzo &operator=(Indirizzo &);
		
		string get_cap()const{return cap;}
		string get_civico()const{return civico;}
		string get_city()const{return city;}
		string get_via()const{return via;}
		
		friend ostream &operator<<(ostream &os,const Indirizzo &);	
	
};

#endif
