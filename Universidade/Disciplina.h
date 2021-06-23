#ifndef _DISCIPLNA_H_
#define _DISCIPLINA_H_
#include "stdafx.h"

class Departamento;

class Disciplina
{
private: 
    const char *nome;    
    const char *area_conhecimento;

    Departamento *pDepAssociado;

public:
    
    Disciplina();
    ~Disciplina();
    
    Disciplina *dProx  = NULL;

    void setNome(const char *n);
    const char*getNome();

    void setDepartamento(Departamento *pd);
    Departamento* getDepartamento();

};
#endif