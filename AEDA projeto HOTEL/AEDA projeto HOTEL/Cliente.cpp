#include "Cliente.h"
#include<stdio.h>

using namespace std;

// Construtor
Cliente::Cliente(string nome):Pessoa(nome){
	this->total_a_pagar = 0;
}

//retorna uma string com a informaçao toda do cliente
string Cliente::info(){
	stringstream ss;

	ss << "Cliente " << nome << " : " <<"Total a pagar: " << total_a_pagar << endl;//formatar a string
	ss << "Espacos atribuidos(Espaco,preco) :";

	if (espacos.size() == 0){//se nao tiver espacos atribuidos
		ss << " none" << endl;
		return ss.str();
	}
	
	for (int i = 0; i < espacos.size(); i++){//percorre vetor e cria a string
		ss << " <" << espacos[i]->getNomeEspaco() << "," << espacos[i]->getPreco() << ">,";
	}
	return ss.str();
}



