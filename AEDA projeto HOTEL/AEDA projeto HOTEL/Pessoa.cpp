#include "Pessoa.h"
#include<stdio.h>


using namespace std;

Pessoa::Pessoa(string nome){
	this->nome = nome;
}
void Pessoa::add_espaco(Espaco espaco){
	espacos.push_back(espaco);
}