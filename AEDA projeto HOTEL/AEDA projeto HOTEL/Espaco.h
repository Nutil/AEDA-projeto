#ifndef ESPACO_H_
#define ESPACO_H_


#include "Hotel.h"

using namespace std;

class Espaco{

	string nomeEspaco;
	int preco;
public:
	/*construtor*/
	Espaco(string nomeEspaco){ this->nomeEspaco = nomeEspaco; };

	/*Metodos get*/
	string getNomeEspaco(){ return this->nomeEspaco; }
	int getPreco(){ return this->preco; }

	/* Metodos update */
	bool update_espaco_nome(string nome1);
	bool update_espaco_preco(string nome);
};
#endif;