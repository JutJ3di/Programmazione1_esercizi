#include"Brano.h"

Branom::Branom():Filem(){
	
	inter = NULL;
	brano = NULL;
	durata = 0;
	
	
}

Branom::Branom(const char *url_t,int kbyte_t,const char *formato_t,const char*brano_t,const char*inter_t,float durata_t):Filem(url_t,kbyte_t,formato_t){
	
	brano = new char[strlen(brano_t)+1];
	strcpy(brano,brano_t);
	
	inter = new char[strlen(inter_t)+1];
	strcpy(inter,inter_t);
	
	durata = durata_t;
	
}

Branom::Branom(const Branom &vi):Filem(vi){
	
	if(this == &vi)
		return;
		
		
	brano = new char[strlen(vi.brano)+1];
	strcpy(brano,vi.brano);
	
	inter = new char[strlen(vi.inter)+1];
	strcpy(inter,vi.inter);
	
	durata = vi.durata;
	
}

const Branom &Branom::operator=(Branom &vi){

	
	if(this == &vi)
		return *this;
		
		
	Filem::operator=(vi);
		
	delete []brano;
	delete []inter;	
		
	brano = new char[strlen(vi.brano)+1];
	strcpy(brano,vi.brano);
	
	inter = new char[strlen(vi.inter)+1];
	strcpy(inter,vi.inter);
	
	durata = vi.durata;
	return *this;	
}

Branom::~Branom(){
	
	delete []inter;
	delete []brano;
	
}

ostream &operator<<(ostream &os,const Branom &vi){
	
	os<<(Filem&)vi<<vi.brano<<" "<<vi.inter<<" "<<vi.durata<<endl;
	return os;
	
}

istream &operator>>(istream &in,Branom &vi){
	
	in>>(Filem&)vi;
	
	char buff[256];
	
	cout<<"brano ";
	in.getline(buff,256);
	vi.brano = new char[strlen(buff)+1];
	strcpy(vi.brano,buff);
	
	in.ignore();
	cout<<"inter ";
	in.getline(buff,256);
	
	vi.inter = new char[strlen(buff)+1];
	
	strcpy(vi.inter,buff);
	
	cout<<"durata ";
	in>>vi.durata;
	
	return in;
	
}

void Branom::mem_dati(fstream &file){
	
	file.open("prova.dat");
	
	file<<url<<" "<<kbyte<<" "<<formato<<" "<<brano<<" "<<inter<<" "<<durata;
	
	file.close();
}
