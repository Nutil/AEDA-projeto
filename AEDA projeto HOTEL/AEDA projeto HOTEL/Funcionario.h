#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"
#include "Pessoa.h"

using namespace std;

class Funcionario:public Pessoa{
	int ordenado;
public:
	/* Construtor e metodos construçao*/
	Funcionario(string nome);

	/* Metodos read */
	string info();

	/* Metodos update */
	void Funcionario::update_Ordenado(int valor);


};
#endif;