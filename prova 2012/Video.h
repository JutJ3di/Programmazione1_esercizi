#ifndef VIDEO
#define VIDEO

#include"File.h"

#include<string>

class Video:public Filem{
	
	private:
		
		char * autore;
		char*soggetto;
		string data;
		
		
	public:
	
		Video();
		Video(const char *,int ,const char*,const char*,const char*,string);	
		Video(const Video &);
		const Video &operator=(Video &);
		~Video();
		
		friend ostream &operator<<(ostream &os,const Video &);
		friend istream &operator>>(istream &in,Video &);
		
		virtual void mem_dati(fstream &file);
		
		
	
};

#endif
