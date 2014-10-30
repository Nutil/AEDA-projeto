#include "Cliente.h"
#include<stdio.h>

using namespace std;

Cliente::Cliente(string nome):Pessoa(nome){//Construtor
	this->total_a_pagar = 0;
}



