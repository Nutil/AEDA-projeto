#include "Funcionario.h"
#include<stdio.h>

using namespace std;

Funcionario::Funcionario(string nome) :Pessoa(nome){//Construtor
	this->ordenado = 0;
}

void Funcionario::set_Ordenado(int valor){
	ordenado = valor;

}
