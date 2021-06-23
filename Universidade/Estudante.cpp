#include "Estudante.h"

Estudante::Estudante(int nota, const char* nome, Universidade* univFiliada):
Pessoa(univFiliada, nome)
{
    this->nota = nota;
    
}
Estudante::~Estudante(){}

void Estudante::setNota(int num)
{
    nota = num;
}

int Estudante::getNota()
{
    return nota;
}