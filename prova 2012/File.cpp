#include"File.h"

Filem::Filem(){
	
	url =NULL;
	kbyte = 0;
	formato = NULL;
	
}


Filem::Filem(const char *url_t,int kbyte_t,const char *formato_t){
	
	url = new char[strlen(url_t)+1];
	strcpy(url,url_t);
	
	kbyte = kbyte_t;
	
	formato  = new char[strlen(formato_t)+1];
	strcpy(formato,formato_t);
	
}

Filem::Filem(const Filem &fi){
	
	if(this == &fi)
		return;
		
	url = new char[strlen(fi.url)+1];
	strcpy(url,fi.url);
	
	kbyte = fi.kbyte;
	
	formato = new char[strlen(fi.formato)+1];
	strcpy(formato,fi.formato);
		
}

const Filem &Filem::operator=(Filem &fi){
	
	if(this == &fi)
		return *this;
		
	
	delete []url;
	delete []formato;	
		
	url = new char[strlen(fi.url)+1];
	strcpy(url,fi.url);
	
	kbyte = fi.kbyte;
	
	formato = new char[strlen(fi.formato)+1];
	strcpy(formato,fi.formato);	
	
	return *this;	
}

Filem::~Filem(){
	
	delete []formato;
	delete []url;
	
}

ostream &operator<<(ostream &os,const Filem &fi){
	
	os<<fi.url<<" "<<fi.kbyte<<" "<<fi.formato<<endl;
	return os;
	
}

istream &operator>>(istream &in,Filem &fi){
	
	char buff[256];
	
	cout<<"url  ";
	in.getline(buff,256);
	fi.url = new char[strlen(buff)+1];
	strcpy(fi.url,buff);
	
	cout<<"kbyte ";
	in>>fi.kbyte;
	
	in.ignore();

	cout<<"formato ";
	in.getline(buff,256);
	fi.formato = new char[strlen(buff)+1];
	strcpy(fi.formato,buff);
	
	return in;
	
	
}

void Filem::mem_dati(fstream &file){
	
	file.open("prova.dat");
	
	file<<url<<" "<<kbyte<<" "<<formato;
	
	file.close();
}



