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
public:
	/* Construtor */
	Funcionario(string nome);

	/* Metodos get */
	string getNome(){ return nome; }
	vector<Espaco> getEspacos(){ return espacos; }
};
#endif;