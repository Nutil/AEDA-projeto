#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <string>
#include <vector>

using namespace std;

class Funcionario{

	string nomeFuncionario;
	vector<Espaco> espacosResponsavel; //O vector com os espaços pelo qual é responsavel
public:
	/* Construtor */
	Funcionario(string nomeFuncionario, vector<Espaco> espacosResponsavel);

	/* Metodos get */
	string getNomeFuncionario(){ return nomeFuncionario; }
	vector<Espaco> getEspacosResponsavel(){ return espacosResponsavel; }
};