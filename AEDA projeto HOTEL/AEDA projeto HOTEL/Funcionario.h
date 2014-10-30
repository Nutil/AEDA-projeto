#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"
#include "Pessoa.h"

using namespace std;

class Funcionario:public Pessoa{

	string nome;
	vector<Espaco> espacos; //O vector com os espaços pelo qual é responsavel
	int ordenado;
public:
	/* Construtor e metodos construçao*/
	Funcionario(string nome);
	void Funcionario::set_Ordenado(int valor);


	/* Metodos read */
	stringstream info();


};
#endif;