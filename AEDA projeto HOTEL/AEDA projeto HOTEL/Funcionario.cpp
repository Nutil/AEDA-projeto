#include "Funcionario.h"
#include<stdio.h>

using namespace std;
//Construtor
Funcionario::Funcionario(string nome) :Pessoa(nome){
	this->ordenado = 0;
}
void Funcionario::update_Ordenado(int valor){
	this->ordenado = valor;
}
string Funcionario::info(){
	stringstream ss;

	ss << "Funcionario " << nome << " : " << "Ordenado: " << ordenado << endl;//formatar a string
	ss << "Espacos atribuidos : ";

	if (espacos.size() == 0){//se nao tiver espacos atribuidos
		ss << " none" << endl;
		return ss.str();
	}

	for (int i = 0; i < espacos.size(); i++){//percorre vetor e cria a string
		ss << espacos[i]->getNomeEspaco() << " , ";
	}
	return ss.str();

}

