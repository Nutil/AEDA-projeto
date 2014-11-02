#ifndef CLIENTE_H_
#define CLIENTE_H_

#include "Hotel.h"

using namespace std;

class Cliente:public Pessoa{
	int total_a_pagar;
public:
	/* Construtor e metodos ADD*/
	Cliente(string nome);

	/* Metodos get */
	int getTotal(){ return this->total_a_pagar; }

	/* Metodos read*/
	string info();

};
#endif;