#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"
#include "Pessoa.h"

using namespace std;

class Cliente:public Pessoa{

	int total_a_pagar;
public:
	/* Construtor e metodos ADD*/
	Cliente(string nome);
	/* Metodos get */
	int getTotal(){ return this->total_a_pagar; }
};
#endif;