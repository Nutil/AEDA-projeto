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