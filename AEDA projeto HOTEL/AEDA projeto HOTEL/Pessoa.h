#ifndef PESSOA_H_
#define PESSOA_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"

using namespace std;

class Pessoa{
	string nome;
	vector<Espaco> espacos;
public:
	/* Construtor e metodos construçao*/
	Pessoa(string nome);
	void add_espaco(Espaco espaco);

	/* Metodos get */
	string getNome();
	vector<Espaco> getEspacos();
};
#endif