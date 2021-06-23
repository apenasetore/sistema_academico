#ifndef _PESSOA_H_
#define _PESSOA_H_

#include "Universidade.h"

class Pessoa{
private:
	
	const char* nome;
	Universidade *univFiliada;

public:

	
	Pessoa(Universidade *uP = NULL, const char *nP="");
	~Pessoa();

	void setNome(const char* nP);
	const char* getNome();

	void setUnivFiliada(Universidade *uP);
	Universidade *getUnivFiliada();


};
#endif