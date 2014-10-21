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
	/* Construtor */
	//Pessoa(string nomeCliente, vector<Espaco> espacosReservados, int total_a_pagar);

	/* Metodos get */
	virtual string getNome() = 0;
	virtual vector<Espaco> getEspacos() = 0;
};
#endif