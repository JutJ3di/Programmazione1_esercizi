#ifndef AUTO

#define AUTO

#include"Veicolo.h"

class Auto:public Veicolo{
	
	private:
		char *ali;
	
	public:
		
		Auto();
		Auto(const char*,const char*,const char*);
		Auto(const Auto &);
		const	Auto &operator=( Auto &);
		
		virtual ~Auto();
		
	
		
		friend ostream &operator<<(ostream &os,const Auto &);
		friend istream &operator>>(istream &in,Auto &);
		
			
};

#endif
