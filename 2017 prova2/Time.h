#ifndef TIME
#define TIME

#include<iostream>
#include<fstream>

using namespace std;

class Time{
	
	private:
		
		int ore;
		int minuti;
		int secondi;
	
	public:
	
		Time();
		Time(int,int,int);
		Time(const Time &);
		const Time &operator=(Time &);
		~Time();
		
		void set_ora(int ore){this->ore= ore;}
		void set_minuti(int minuti){this->minuti = minuti;}
		void set_secondi(int secondi){this->secondi = secondi;}
		
		int get_ore()const{return ore;}
		int get_minuti()const{return minuti;}
		int get_secondi()const{return secondi;}
		
		friend ostream &operator<<(ostream &os,const Time &);
		friend istream &operator>>(istream &in,Time &);
		friend ofstream &operator<<(ofstream &of,Time &);	
};

#endif
