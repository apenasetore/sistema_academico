#include "Universidade.h"
#include "Estudante.h"

Universidade::Universidade(const char* nU){
	nome = nU;
	
	universitario =  new Estudante*[6];
	depU = new Departamento*[5];
}

Universidade::~Universidade(){
	delete(universitario);
	delete(depU);
}

void Universidade::setNome(const char* nU){
	
	nome = nU;
}

const char* Universidade::getNome(){

	return nome;

}
void Universidade::setEstudante(Estudante* eU, int ctd){

	universitario[ctd] = eU;
}
Estudante* Universidade::getUniversitario(int ctd){

	return universitario[ctd];
	
}
void Universidade::setDepartamento(Departamento* dP, int ctd){
	
	depU[ctd] = dP;
}


