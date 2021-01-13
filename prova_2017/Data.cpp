#include"Data.h"

Data::Data(int giorno,int mese,int anno){
	
	this->giorno = giorno;
	this->mese =mese;
	this->anno = anno;
	
}

Data::Data(const Data &da){
	
	if(this==&da)
		return;
		
	giorno = da.giorno;
	mese = da.mese;
	anno = da.anno;	
}

const Data &Data::operator=(Data &da){
	
	
	if(this==&da)
		return *this;
		
	giorno = da.giorno;
	mese = da.mese;
	anno = da.anno;	
	return *this;
}

ostream &operator<<(ostream &os,const Data &da){
	os<<da.get_giorno()<<"/"<<da.get_mese()<<"/"<<da.get_anno();
	return os;
}

istream &operator>>(istream &in,Data &da){
	
	in>>da.giorno;
	in>>da.mese;
	in>>da.anno;
	return in;
	
}
