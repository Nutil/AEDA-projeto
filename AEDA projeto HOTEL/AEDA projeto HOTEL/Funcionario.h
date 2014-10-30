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
	vector<Espaco> espacos; //O vector com os espa�os pelo qual � responsavel
	int ordenado;
public:
	/* Construtor e metodos constru�ao*/
	Funcionario(string nome);
	void Funcionario::set_Ordenado(int valor);


};
#endif;