#ifndef PESSOA_H_
#define PESSOA_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"
#include <sstream>

using namespace std;

class Pessoa{
protected:	
	string nome;
	vector<Espaco *> espacos;
public:
	/* Construtor e metodos construçao*/
	Pessoa(string nome);


	/* Metodos get */
	string getNome(){ return this->nome;}
	vector<Espaco *> getEspacos(){ return this->espacos;}

	/* Metodos read */
	virtual string info() = 0;

	/* Metodos delete */
	bool delete_espacos();

	/* Metodos update */
	bool remove_espaco(Espaco espaco);
	bool add_espaco(Espaco espaco);
	void update_nome(string nome);
	bool update_espacos(vector<Espaco *> vetor);
	
};
#endif