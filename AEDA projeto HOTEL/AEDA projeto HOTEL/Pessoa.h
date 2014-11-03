#ifndef PESSOA_H_
#define PESSOA_H_

#include "Hotel.h"
#include "Espaco.h"
#include <iostream>
#include <string>
#include <vector>

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
	//bool remove_espaco(Espaco espaco);
	//bool add_espaco(Espaco espaco);
	void update_nome(string nome);
	bool update_espacos(vector<Espaco *> vetor);

	
};
class Cliente :public Pessoa{
	int total_a_pagar;
public:
	/* Construtor e metodos ADD*/
	Cliente(string nome);

	/* Metodos get */
	int getTotal(){ return this->total_a_pagar; }

	/* Metodos read*/
	string info();
};

class Funcionario :public Pessoa{
	int ordenado;
public:
	/* Construtor e metodos construçao*/
	Funcionario(string nome);

	/* Metodos read */
	string info();

	/* Metodos update */
	void update_Ordenado(int valor);


};
#endif
