#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_

#include "Departamento.h"
#include "stdafx.h"

class Estudante;

class Universidade{
private:
	const char *nome;
	Departamento **depU;
	Estudante** universitario;
public:
	
	Universidade(const char* nU = "");
	~Universidade();

	void setDepartamento(Departamento* dP, int ctd);
	void setNome(const char* nU);
	const char* getNome();
	void setEstudante(Estudante *eU, int ctd);
	Estudante *getUniversitario(int ctd);

};
#endif