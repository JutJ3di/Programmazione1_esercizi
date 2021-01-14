#include"Rileva.h"

Rileva::Rileva(string Regione,string Provincia ,string City):anno(0),mese(0),giorno(0),Tmax(0),Tmin(0){
	
	this->Regione = Regione;
	this->Provincia = Provincia;
	this->City = City;
	
}

Rileva::Rileva(const Rileva &ri):anno(ri.anno),mese(ri.mese),Tmax(ri.Tmax),Tmin(ri.Tmin){
	
	if(this == &ri)
		return;
		
	Provincia = ri.Provincia;
	Regione = ri.Regione;
	City = ri.Regione;

}

const Rileva &Rileva::operator=(const Rileva &ri){
	
	if(this == &ri)
		return *this;
		
	Provincia = ri.Provincia;
	Regione = ri.Regione;
	City = ri.Regione;
	
	anno = ri.anno;
	mese = ri.mese;
	giorno = ri.giorno;
	
	return *this;	
}

void Rileva::set_mese(int mese){
	if(mese<=0 || mese>12)
		throw Bad_data("errore inserimento mese");
	else
		this->mese = mese;
}

void Rileva::set_giorno(int giorno){
	if(giorno <= 0 || giorno>31)
		throw Bad_data("errore inserimento giorno");
	else
		this->giorno  = giorno;	
}



ostream &operator<<(ostream &os,const Rileva &ri){
	
	os<<ri.get_Provincia()<<" "<<ri.get_Regione()<<" "<<ri.get_City()<<" "<<ri.get_giorno()<<"/"<<ri.get_mese()<<"/"<<ri.get_anno()<<ri.get_Tmax()<<" "<<ri.get_Tmin();
	return os;
}

istream &operator>>(istream &in,Rileva &ri){
	
	in>>ri.Regione;
	in>>ri.Provincia;
	in>>ri.City;
	
	in>>ri.giorno;
	in>>ri.mese;
	in>>ri.anno;
		
	return in;
}





