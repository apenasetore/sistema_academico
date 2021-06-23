#ifndef _ESTUDANTE_H_ 
#define _ESTUDANTE_H_

#include "Pessoa.h"

class Estudante:public Pessoa
{
private:
    int nota;
public:

    Estudante(int nota = 0, const char* nome ="", Universidade* univFiliade = NULL);
    ~Estudante();

    void setNota(int n);
    int getNota();
};
#endif
