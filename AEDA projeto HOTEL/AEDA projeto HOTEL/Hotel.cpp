#include "Hotel.h"
#include<stdio.h>


using namespace std;

/* Metodos sobre Clientes */
int Hotel::soma_totais(){
	unsigned int resultado = 0;
	for (int i = 0; i < clientes.size(); i++){
		resultado = resultado + clientes[i]->getTotal();
	}
	return resultado;
}
int Hotel::encontra_cliente(string nome){
	for (int i = 0; i < clientes.size(); i++){
		if (clientes[i]->getNome() == nome) {
			return i;
		}
	}
	return -1; // nao encontrou
}
void Hotel::adiciona_cliente(string nome){
	Cliente novocli(nome);
	clientes.push_back(&novocli);
}
bool Hotel::remove_cliente(string nome){
	int temp = clientes.size();//guarda size do vetor pre-eliminaçao de um espaco

	for (int i = 0; i < clientes.size(); i++){
		if (clientes[i]->getNome() == nome){
			delete clientes[i];
			break;
		}
	}
	if (temp == clientes.size()) return false; // deu asneira, a size continua igual
	else return true; // a size nao esta igual, assume se que correu bem e destruiu.
}
void Hotel::display_clientes(){
	for (int i = 0; i < clientes.size(); i++){
		cout << clientes[i]->getNome() << endl;
	}
}

/* Metodos sobre Funcionarios */
int Hotel::encontra_funcionario(string nome){
	for (int i = 0; i < funcionarios.size(); i++){
		if (funcionarios[i]->getNome() == nome) {
			return i;
		}
	}
	return -1; // nao encontrou
}
void Hotel::display_funcionarios(){
	for (int i = 0; i < funcionarios.size(); i++){
		cout << funcionarios[i]->getNome() << endl;
	}
}
void Hotel::adiciona_funcionario(string nome){
	Funcionario novofunc(nome);
	funcionarios.push_back(&novofunc);
}
bool Hotel::remove_funcionario(string nome){
	int temp = funcionarios.size();//guarda size do vetor pre-eliminaçao de um espaco

	for (int i = 0; i < funcionarios.size(); i++){
		if (funcionarios[i]->getNome() == nome){
			delete funcionarios[i];
			break;
		}
	}
	if (temp == funcionarios.size()) return false; // deu asneira, a size continua igual
	else return true; // a size nao esta igual, assume se que correu bem e destruiu.

}
