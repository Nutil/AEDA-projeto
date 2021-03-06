#ifndef PESSOA_H_
#define PESSOA_H_

#include "Hotel.h"

using namespace std;

class Pessoa{
protected:	
	string nome;

//	vector<Espaco *> espacos;
public:
	/* Construtor e metodos construšao*/
	Pessoa(string nome);


	/* Metodos get */
	string getNome(){ return this->nome;}
	//vector<Espaco *> getEspacos(){ return this->espacos;}

	/* Metodos read */
	virtual string info() = 0;

	/* Metodos delete */
	bool delete_espacos();

	/* Metodos update */
//	bool remove_espaco(Espaco espaco);
//	bool add_espaco(Espaco espaco);
//	void update_nome(string nome);
//	bool update_espacos(vector<Espaco *> vetor);

	
};

class Funcionario:public Pessoa{
	int ordenado;
	int id;
	static int _ID;
public:
	/* Construtor e metodos construšao*/
	Funcionario(string nome);

	/* Metodos read */
	string info();

	/* Metodos update */
	void update_Ordenado(int valor);


};

class Cliente:public Pessoa{
	int total_a_pagar;
	int id;
	static int _ID;

public:
	/* Construtor e metodos ADD*/
	Cliente(string nome);

	/* Metodos get */
	int getTotal(){ return this->total_a_pagar; }

	/* Metodos read*/
	string info();

};


#endif
