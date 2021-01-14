#ifndef RIVELA
#define RIVELA


#include<iostream>

#include<cstring>

#include<string>

#include"Bad_data.h"

using namespace std;

class Rileva{
	
	private:
		
		string Regione ;
		string Provincia;
		string City;
		int anno;
		int mese;
		int giorno;
		int Tmax;
		int Tmin;
		
	public:
	
		Rileva():Regione("vuoto"),Provincia("vuoto"),City("vuoto"),anno(0),mese(0),giorno(0),Tmax(0),Tmin(0){}
		Rileva(string,string,string);
		Rileva(const Rileva &);
		const Rileva &operator=(const Rileva &);
	
		
		friend ostream &operator<<(ostream &os,const Rileva &);
		friend istream &operator>>(istream &in,Rileva &);
		
		inline void set_Regione(string Regione){this->Regione = Regione;}
		inline void set_Provincia(string Provincia){this->Provincia = Provincia;}
		inline void set_City(string City){this->City = City;}
		void set_anno(int anno){this->anno = anno;}
		void set_mese(int mese);
		void set_giorno(int giorno);
		void set_Tmax(int Tmax){this->Tmax = Tmax;}
		void set_Tmin(int Tmin){this->Tmin = Tmin;}
		
		string get_Regione()const{return Regione;}
		string get_Provincia()const{return Provincia;}
		string get_City()const{return City;}
		int get_mese()const{return mese;}
		int get_anno()const{return anno;}
		int get_giorno()const{return giorno;}
		int get_Tmax()const{return Tmax;}
		int get_Tmin()const{return Tmin;}
		
};

#endif
