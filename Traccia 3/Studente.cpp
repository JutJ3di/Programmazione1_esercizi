#include"Studente.h"

Studente::Studente(){
	presente = 0;
	voto = 0;
}

Studente::Studente(const char *nome,const char *cognome,const char id[5],bool presente):Entry(nome,cognome,id){
	
	this->presente=presente;
	voto = 0;
	
}

Studente::Studente(const Studente &stu):Entry(stu){
	
	if(this==&stu)
		return;
		
	presente = stu.presente;
	voto = stu.voto;	
	
}

const Studente &Studente::operator=(Studente &stu){
	
	if(this==&stu)
		return *this;
		
	Entry::operator=(stu);	
		
	presente = stu.presente;
	voto = stu.voto;
	
	return *this;	
	
}

bool Studente::set_voto(int voto){
	
	if(voto >= 0 && voto<11){
		this->voto = voto;
		return true;
	}else		
		return false;	
}

ostream &operator<<(ostream &os,const Studente &stu){
	
	os<<(Entry&)stu<<" "<<stu.get_presente()<<" "<<stu.get_voto();
	return os;
	
}

ofstream &operator<<(ofstream &of,const Studente &stu){

	of<<(Entry&)stu<<" "<<stu.get_presente()<<" "<<stu.get_voto();
	return of;
		
	
}
