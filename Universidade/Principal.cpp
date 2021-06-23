#include "Principal.h"

Principal::Principal() {}

Principal::~Principal() {}

void Principal::Executar()
{

	UTFPR.setNome("UTFPR");
	
	DAEL.setNome("DAEL");

	Logica.setNome("Logica");
	Tecprog.setNome("Tecnicas de Programação");
	Edados.setNome("Estrutura de Dados");
	Fp1.setNome("Fundamentos de Programação");

	Etore.setNome("Etore");
	Lee.setNome("Lee");
	Henrique.setNome("Henrique");
	Burda.setNome("Burda");
	Garret.setNome("Garret");

	UTFPR.setDepartamento(&DAEL,0);

	DAEL.setUniversidade(&UTFPR);
	DAEL.incluiDisciplina(&Logica);
	DAEL.incluiDisciplina(&Tecprog);
	DAEL.incluiDisciplina(&Edados);
	DAEL.incluiDisciplina(&Fp1);
	
	
	Etore.setUnivFiliada(&UTFPR);
	Henrique.setUnivFiliada(&UTFPR);
	Lee.setUnivFiliada(&UTFPR);
	Burda.setUnivFiliada(&UTFPR);
	Garret.setUnivFiliada(&UTFPR);
	
	UTFPR.setEstudante(&Lee,0);
	UTFPR.setEstudante(&Etore,1);
	UTFPR.setEstudante(&Burda,2);
	UTFPR.setEstudante(&Garret,3);
	UTFPR.setEstudante(&Henrique,4);
	
	Etore.setNota(6);

	cout << "Na universidade:" << UTFPR.getNome() <<endl; 

	for(int i = 0; i < 5; i++){

		cout << "Aluno " << UTFPR.getUniversitario(i)->getNome() << endl;
	}
	
	cout << "Do departamento " << DAEL.getNome() << " tem as disciplinas:" << endl;
	
	DAEL.listaDisciplina();
}