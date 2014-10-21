#ifndef QUARTO_H_
#define QUARTO_H_
#include <string>
#include <vector>

using namespace std;

class Quarto : public Espaco{

	bool duplo, frente; //podiamos fazer isto com bools, era mais facil
public:
	/* Construtor */
	Quarto(string nomeEspaco, int preco, bool duplo, bool frente);

	/* Metodos get */
	bool getDuplo(){ return duplo; }
	bool getFrente(){ return frente; }
};