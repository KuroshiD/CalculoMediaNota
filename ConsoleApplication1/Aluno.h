#pragma once
#include "Pessoa.h"
#include <iostream>
using namespace std;

class Aluno : Pessoa {
	private:
		int num_notas = 5;
		float* notas;

	public:
		Aluno(const string& n, int i) : Pessoa(n, i), notas(nullptr), num_notas(0) { }

		void adicionarNota(float nota) {
			float* newArray = new float[num_notas + 1]; 
			for (int i = 0; i < num_notas; i++) {
				newArray[i] = notas[i]; 
			}
			newArray[num_notas] = nota;
			delete[] notas;
			notas = newArray;
			num_notas++;
		}

		float calcMedia() const {
			if (num_notas == 0) {
				return 0.0;
			}

			float soma = 0.0;
			for (int i = 0; i < num_notas; i++) {
				soma += notas[i];
			}

			return soma / num_notas;
		}

		string getNome() const {
			return Pessoa::getNome();
		};

		int getIdade() const {
			return Pessoa::getIdade();
		}



		~Aluno() {
			delete[] notas;
		}
};

