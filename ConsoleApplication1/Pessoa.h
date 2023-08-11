#include <iostream>
using namespace std;

class Pessoa {
	private:
		string nome;
		int idade;

	public:
		Pessoa(const string& n, int i) : nome(n), idade(i) { }

		
		string getNome() const {
			return nome;
		}
		int getIdade() const {
			return idade;
		}

};
