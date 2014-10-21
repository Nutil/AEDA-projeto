#ifndef HOTEL_H_
#define HOTEL_H_
#include <string>
#include <vector>

using namespace std;

class Hotel{

	vector<Espaco> espacos;
	vector<Funcionario> funcionarios;
	vector<Cliente> clientes; //nao sei se é necessario
public:
	/*construtor*/
	Hotel(vector<Espaco> espacos, vector<Funcionario> funcionarios, vector<Cliente> clientes);

	/*Metodos get*/
	vector<Espaco> getEspacos(){ return espacos; }
	vector<Funcionario> getFuncionarios(){ return funcionarios; }
	vector<Cliente> getClientes(){ return clientes; }

};