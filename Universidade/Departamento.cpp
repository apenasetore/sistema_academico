#include "Universidade.h"
#include "Departamento.h"

Departamento::Departamento(Disciplina* pdpD, Disciplina*pdaD, Universidade* uD, const char * nD){
   
    nD = new char[10];
    pDiscplPrim = NULL;
    pDiscplAtual = NULL;
    universidadeD = NULL;
}
Departamento::~Departamento(){
    
    universidadeD = NULL;
    pDiscplPrim = NULL;
    pDiscplAtual = NULL;
    delete(nome);
}

void Departamento::setNome(const char *n){
    nome = n;
}

const char* Departamento::getNome(){
    return nome;
}

void Departamento::setUniversidade(Universidade* uD){
    universidadeD = uD;
}
Universidade* Departamento::getUniversidade(){
    return universidadeD;
}

void Departamento:: incluiDisciplina(Disciplina* pD){

    
    if(pDiscplPrim == NULL){
    
        pDiscplPrim = pD;
        pDiscplAtual = pD;
    }
    else{
    
        pDiscplAtual->dProx = pD;
        pDiscplAtual = pD;
        
    }
     
}
void Departamento::listaDisciplina(){

    Disciplina* aux;
    
    aux = pDiscplPrim;

    while(aux != NULL){
        cout << aux->getNome() <<endl;
        aux = aux->dProx;
    }
}