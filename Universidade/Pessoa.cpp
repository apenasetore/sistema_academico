#include "Pessoa.h"

Pessoa::Pessoa(Universidade *uP, const char* nP){
	nome = nP;
	univFiliada = uP;

}

Pessoa::~Pessoa(){}

void Pessoa::setNome(const char *nP){
	nome = nP;

}

void Pessoa::setUnivFiliada(Universidade* uP){
	univFiliada = uP;
}

const char* Pessoa::getNome(){
	return nome;
}

Universidade* Pessoa::getUnivFiliada(){
	return univFiliada;
}