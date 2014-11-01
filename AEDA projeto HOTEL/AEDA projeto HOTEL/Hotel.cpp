#include "Hotel.h"
#include<stdio.h>


using namespace std;


int Hotel::soma_totais(){
	unsigned int resultado = 0;
	for (int i = 0; i < clientes.size(); i++){
		resultado = resultado + clientes[i]->getTotal();
	}
	return resultado;
}

int Hotel::encontra_cliente(string nome){
	for (int i = 0; i < clientes.size(); i++){
		if (clientes[i]->getNome == nome) {
			return i;
		}
	}
	return -1; // nao encontrou
}

void Hotel::adiciona_cliente(Hotel hotel, string nome){
	Cliente novocli(nome);
	hotel.getClientes().push_back(&novocli);
}
bool Hotel::remove_cliente(Hotel hotel, string nome){
	int temp = hotel.clientes.size();//guarda size do vetor pre-eliminaçao de um espaco

	for (int i = 0; i < clientes.size(); i++){
		if (clientes[i]->getNome() == nome){
			delete clientes[i];
			break;
		}
	}
	if (temp == clientes.size()) return false; // deu asneira, a size continua igual
	else return true; // a size nao esta igual, assume se que correu bem e destruiu.
}
void Hotel::display_clientes(Hotel hotel){
	for (int i = 0; i < clientes.size(); i++){
		cout << clientes[i]->getNome() << endl;
	}
}
