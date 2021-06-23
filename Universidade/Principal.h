#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_

#include "Estudante.h"

class Principal
{

private:
	Universidade UTFPR;
	
	Departamento DAEL;

	Disciplina	Logica;
	Disciplina Tecprog;
	Disciplina Edados;
	Disciplina Fp1;


	Estudante Etore;
	Estudante Lee;
	Estudante Burda;
	Estudante Henrique;
	Estudante Garret;

public:
	Principal();
	~Principal();

	void Executar();
};
#endif