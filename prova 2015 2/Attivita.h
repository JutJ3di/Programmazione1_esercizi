#ifndef ATTIVITA
#define ATTIVITA

#include<iostream>
#include<cstring>

using namespace std;

class Attivita{
	
	protected:
		
		int PID;
		char * des;
		bool start;
		
		
	public:	
	
		Attivita();
		Attivita(int,const char*,bool);
		Attivita(const Attivita&);
		const Attivita &operator=(Attivita &);
		virtual ~Attivita();
		
		void set_pid(int pid_t){PID = pid_t;}
		void set_start(bool start_t){start = start_t;}
		void set_des(const char*des_t);
		
		inline int get_pid()const{return PID;}
		inline const char* get_des()const{return des;}
		inline bool get_start()const{return start;}
		
		virtual void attiva(){start = 1;}
		
		friend istream &operator>>(istream &in,Attivita &);
		friend ostream &operator<<(ostream &os,const Attivita &);
		
	
};

#endif
