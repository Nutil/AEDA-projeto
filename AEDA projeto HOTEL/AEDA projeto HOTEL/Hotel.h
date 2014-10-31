#ifndef HOTEL_H_
#define HOTEL_H_
#include <string>
#include <vector>
#include <iostream>
#include "Espaco.h"
#include "Pessoa.h"
#include "Funcionario.h"
#include "Cliente.h"

using namespace std;

class Hotel{

	vector<Espaco *> espacos;
	vector<Funcionario *> funcionarios;
	vector<Cliente *> clientes; //nao sei se é necessario
public:
	/*construtor*/
	//nao precisa

	/*Metodos get*/
	vector<Espaco *> getEspacos(){ return espacos; }
	vector<Funcionario *> getFuncionarios(){ return funcionarios; }
	vector<Cliente *> getClientes(){ return clientes; }

	/* Metodos Sobre Clientes */
	int soma_totais();
};
#endif;