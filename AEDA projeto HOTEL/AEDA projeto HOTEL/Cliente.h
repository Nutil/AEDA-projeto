#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"
#include "Pessoa.h"

using namespace std;

class Cliente:public Pessoa{
	string nome;
	vector<Espaco> espacos;
	int total_a_pagar; //  Era um bonus fixe, poder saber quanto vai ter de pagar por tudo junto
public:
	/* Construtor */
	Cliente(string nome, int total_a_pagar);

	/* Metodos get */
	string getNome(){ return nome; }
	vector<Espaco> getEspacos() { return espacos; }
	int getTotal(){ return total_a_pagar; }
};
#endif;