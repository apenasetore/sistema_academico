#include "Departamento.h"

Disciplina::Disciplina(){
    
    nome = new char[150];
    area_conhecimento = new char[150]; 
    pDepAssociado = NULL;
    dProx = NULL;

}

Disciplina::~Disciplina()
{
    pDepAssociado = NULL;
    dProx = NULL; 
    delete (nome);
    delete (area_conhecimento);
}



void Disciplina::setNome(const char *n){
    nome = n;
}

const char* Disciplina::getNome(){
    return nome;
}

void Disciplina::setDepartamento(Departamento *pd){
    pDepAssociado = pd;
}

Departamento* Disciplina::getDepartamento(){
    return pDepAssociado;
}
