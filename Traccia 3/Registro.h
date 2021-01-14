#ifndef REGISTRO 
#define REGISTRO

#include"Studente.h"


class Registro{
	
	private:
		
		Studente array[20];
		string materia,classe,docente;
		int nelem;
		
	public:
		
		Registro(){nelem = 0;}
		Registro(string,string,string);
		Registro(Registro &);
		const Registro &operator=(Registro &);
		~Registro(){}
		
		Studente get_array()const{return array[20];}
		int get_nelem()const{return nelem;}
		string get_materia()const{return materia;}
		string get_classe()const{return classe;}

		void set_materia(string materia){this->materia = materia;}
		void set_docente(string docente){this->docente = docente;}
		void set_classe(string classe){this->classe = classe;}
		
		bool full()const{return nelem==20;}
		void inserimento(Studente &ele);
		float media_giornaliera();
		void interrogazione(const char* id_t,int n);
		void print();
		
};

#endif
