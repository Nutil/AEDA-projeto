#ifndef HOTEL_H_
#define HOTEL_H_

#include "Pessoa.h"
#include "Cliente.h"
#include "Funcionario.h"
#include "Espaco.h"
#include "Quarto.h"
#include "Sala.h"
#include <vector>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

class Hotel{

	vector<Espaco *> espacos;
	vector<Funcionario *> funcionarios;
	vector<Cliente *> clientes; 
public:
	/*construtor*/
	//nao precisa

	/*Metodos get*/
	vector<Espaco *> getEspacos(){ return espacos; }
	vector<Funcionario *> getFuncionarios(){ return funcionarios; }
	vector<Cliente *> getClientes(){ return clientes; }

	/* Metodos Sobre Clientes */
	int soma_totais();
	int encontra_cliente(string nome);
	void adiciona_cliente(string nome);
	bool remove_cliente(string nome);
	void display_clientes();

	/* Metodos Sobre Funcionarios */
	int encontra_funcionario(string nome);
	void adiciona_funcionario(string nome);
	bool remove_funcionario(string nome);
	void display_funcionarios();
	
};
#endif;