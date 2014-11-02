#ifndef QUARTO_H_
#define QUARTO_H_

#include "Hotel.h"


using namespace std;

class Quarto : public Espaco{

	bool duplo, frente; //podiamos fazer isto com bools, era mais facil
public:
	/* Construtor */
	Quarto(string nomeEspaco);

	/* Metodos get */
	bool getDuplo(){ return duplo; }
	bool getFrente(){ return frente; }
};
#endif;