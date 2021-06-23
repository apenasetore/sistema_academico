#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_
#include "stdafx.h"
#include "Disciplina.h"

class Universidade;

class Departamento
{

private:	
	const char *nome;
	
	Universidade *universidadeD;
	Disciplina* pDiscplPrim;
	Disciplina* pDiscplAtual;

public:
	
	Departamento(Disciplina* pdpD = NULL ,Disciplina*pdaD = NULL ,Universidade* uD = NULL , const char * nD = "");
	~Departamento();

	void setNome(const char* nD);
	const char* getNome();

	void setUniversidade(Universidade* uD);
	Universidade* getUniversidade();

	void incluiDisciplina(Disciplina* dD);
	void listaDisciplina();

};
#endif