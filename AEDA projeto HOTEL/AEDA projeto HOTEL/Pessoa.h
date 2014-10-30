#ifndef PESSOA_H_
#define PESSOA_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"
#include <sstream>

using namespace std;

class Pessoa{
protected:	
	string nome;
	vector<Espaco> espacos;
public:
	/* Construtor e metodos constru�ao*/
	Pessoa(string nome);
	void add_espaco(Espaco espaco);

	/* Metodos get */
	string getNome();
	vector<Espaco> getEspacos();

	/* Metodos read */
	virtual stringstream info() = 0;
};
#endif