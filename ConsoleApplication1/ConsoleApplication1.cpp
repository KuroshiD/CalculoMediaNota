#include <iostream>
#include "Aluno.h"

int main() {
	Aluno aluno("Jo�o", 20);
	aluno.adicionarNota(9.0);
	aluno.adicionarNota(7.5);
	aluno.adicionarNota(4.0);
	aluno.adicionarNota(8.0); 

	cout << "Nome: " << aluno.getNome() << endl;
	cout << "Idade: " << aluno.getIdade() << endl;
	cout << "M�dia das Notas: " << aluno.calcMedia() << endl;
}

