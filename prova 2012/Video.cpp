#include"Video.h"

Video::Video():Filem(){
	
	autore =NULL;
	soggetto =NULL;
	data ="000000";
	
}

Video::Video(const char *url_t,int kbyte_t,const char *formato_t,const char*autore_t,const char*soggetto_t,string data_t):Filem(url_t,kbyte_t,formato_t){
	
	
	autore = new char[strlen(autore)+1];
	strcpy(autore,autore_t);
	
	soggetto = new char[strlen(autore_t)+1];
	strcpy(autore,autore_t);
	
	data = data_t;
	
}

Video::Video(const Video &vi):Filem(vi){
	
	if(this==&vi)
		return;
	
	
		
	autore = new char[strlen(vi.autore)+1];
	strcpy(autore,vi.autore);
	
	soggetto = new char[strlen(vi.soggetto)+1];
	strcpy(soggetto,vi.soggetto);
	
	data = vi.data;
		
	
}

const Video &Video::operator=(Video &vi){
	
	if(this==&vi)
		return *this;
	
	delete []autore;
	delete []soggetto;
		
	autore = new char[strlen(vi.autore)+1];
	strcpy(autore,vi.autore);
	
	soggetto = new char[strlen(vi.soggetto)+1];
	strcpy(soggetto,vi.soggetto);
	
	data = vi.data;
			
	return *this;
}


Video::~Video(){
	
	
	delete []autore;
	delete []soggetto;
}

ostream &operator<<(ostream &os,const Video &vi){
	
	os<<(Filem&)vi<<" "<<vi.autore<<" "<<vi.soggetto<<" "<<vi.data;
	return os;
}

istream &operator>>(istream &in,Video &vi){
	
	in>>(Filem&)vi;
	
	char buff[256];
	
	cout<<"autore ";
	in.getline(buff,256);
	vi.autore = new char[strlen(buff)+1];
	strcpy(vi.autore,buff);
	
	in.ignore();
	cout<<"soggetto ";
	in.getline(buff,256);
	
	vi.soggetto = new char[strlen(buff)+1];
	
	strcpy(vi.soggetto,buff);
	
	cout<<"data ";
	in>>vi.data;
	
	return in;
	
}

void Video::mem_dati(fstream &file){
	
	file.open("prova.dat");
	
	file<<url<<" "<<kbyte<<" "<<formato<<" "<<autore<<" "<<soggetto<<" "<<data;
	
	file.close();
	
}
