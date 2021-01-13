#ifndef DATA
#define DATA

#include<iostream>
using namespace std;


class Data{
	
	private:
		
		int giorno;
		int mese;
		int anno;
		
	public:
	
		Data(){giorno=mese=anno = 0;}
		Data(int,int,int);
		Data(const Data &);
		const Data &operator=(Data &);
		
		int get_giorno()const{return giorno;}
		int get_mese()const {return mese;}
		int get_anno()const{return anno;}
		
		void set_anno(int anno){this->anno = anno;}
		void set_mese(int mese){this->mese = mese;}
		void set_giorno(int giorno){this->giorno=giorno;}
		
		friend ostream &operator<<(ostream &os,const Data &);
		friend istream &operator>>(istream &in,Data &);
};

#endif
