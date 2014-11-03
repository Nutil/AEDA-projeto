#include "Pessoa.h"
#include "Hotel.h"
using namespace std;

int Funcionario::_ID = 0;
int Cliente::_ID = 0;

Pessoa::Pessoa(string nome){
	this->nome = nome;
}

// Construtor
Cliente::Cliente(string nome):Pessoa(nome),id(_ID+=1){
	this->total_a_pagar = 0;
}
//retorna uma string com a informaçao toda do cliente
string Cliente::info(){
	stringstream ss;

	ss << "Cliente " << nome << " : " <<"Total a pagar: " << total_a_pagar << endl;//formatar a string
	ss << "Espacos atribuidos(Espaco,preco): ";

//	if (espacos.size() == 0){//se nao tiver espacos atribuidos
//		ss << " none" << endl;
//		return ss.str();
//	}
//
//	for (int i = 0; i < espacos.size(); i++){//percorre vetor e cria a string
//		ss << " <" << espacos[i]->getNomeEspaco() << "," << espacos[i]->getPreco() << ">,";
//	}
	return ss.str();
}


//Construtor
Funcionario::Funcionario(string nome):Pessoa(nome),id(_ID+=1){
	this->ordenado = 0;
}
void Funcionario::update_Ordenado(int valor){
	this->ordenado = valor;
}
string Funcionario::info(){
	stringstream ss;

	ss << "Funcionario " << nome << " : " << "Ordenado: " << ordenado << endl;//formatar a string
	ss << "Espacos atribuidos : ";

//	if (espacos.size() == 0){//se nao tiver espacos atribuidos
//		ss << " none" << endl;
//		return ss.str();
//	}
//
//	for (int i = 0; i < espacos.size(); i++){//percorre vetor e cria a string
//		ss << espacos[i]->getNomeEspaco() << " , ";
//	}
	return ss.str();

}


