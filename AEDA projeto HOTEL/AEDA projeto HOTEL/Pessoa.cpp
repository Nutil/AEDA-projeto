#include "Pessoa.h"
#include<stdio.h>


using namespace std;

Pessoa::Pessoa(string nome){
	this->nome = nome;
}

bool Pessoa::delete_espacos(){
	for (int i = 0; i < espacos.size(); i++){
		delete espacos[i];
	}
	if (espacos.size() == 0){
		return true;
	}
	else return false;
}
/*bool Pessoa::remove_espaco(Espaco espaco){
	int temp = espacos.size();//guarda size do vetor pre-eliminaçao de um espaco

	for (int i = 0; i < espacos.size(); i++){
		if (espacos[i]->getNomeEspaco() == espaco.getNomeEspaco()){
			delete espacos[i];
			break;
		}
	}
	if (temp == espacos.size()) return false; // deu asneira, a size continua igual
	else return true; // a size nao esta igual, assume se que correu bem e destruiu.

}*/
/*bool Pessoa::add_espaco(Espaco espaco){
	int temp = espacos.size();
	espacos.push_back(&espaco);

	if (temp == espacos.size())return false;
	else return true;
}
void Pessoa::update_nome(string nome){
	this->nome = nome;
}
bool Pessoa::update_espacos(vector<Espaco *> vetor){
	if (delete_espacos()){

		for (int i = 0; i < vetor.size(); i++){
			espacos.push_back(vetor[i]);
		}
		return true;
	}
	else return false;
}
*/
Cliente::Cliente(string nome) :Pessoa(nome){
	this->total_a_pagar = 0;
}
//retorna uma string com a informaçao toda do cliente
string Cliente::info(){
	stringstream ss;

	ss << "Cliente " << nome << " : " << "Total a pagar: " << total_a_pagar << endl;//formatar a string
	ss << "Espacos atribuidos(Espaco,preco): ";

	if (espacos.size() == 0){//se nao tiver espacos atribuidos
		ss << " none" << endl;
		return ss.str();
	}

	//for (int i = 0; i < espacos.size(); i++){//percorre vetor e cria a string
	//	ss << " <" << espacos[i]->getNomeEspaco() << "," << espacos[i]->getPreco() << ">,";
	//}
	return ss.str();
}


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

	//for (int i = 0; i < espacos.size(); i++){//percorre vetor e cria a string
	//	ss << espacos[i]->getNomeEspaco() << " , ";
//	}
	return ss.str();

}
