#ifndef ESPACO_H_
#define ESPACO_H_
#include <string>
#include <vector>

using namespace std;

class Espaco {

	string nomeEspaco;
	int preco;
public:
	/*construtor*/
	Espaco(string nomeEspaco, int preco);

	/*Metodos get*/
	string getNomeEspaco(){ return nomeEspaco; }
	int getPreco(){ return preco; }
};