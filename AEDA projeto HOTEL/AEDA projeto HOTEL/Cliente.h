#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
#include <vector>

using namespace std;

class Cliente{
	string nomeCliente;
	vector<Espaco> espacosReservados;
	int total_a_pagar; //  Era um bonus fixe, poder saber quanto vai ter de pagar por tudo junto
public:
	/* Construtor */
	Cliente(string nomeCliente, vector<Espaco> espacosReservados, int total_a_pagar);

	/* Metodos get */
	string getNomeCliente(){ return nomeCliente; }
	vector<Espaco> getEspacosReservados() { return espacosReservados; }
	int getTotal(){ return total_a_pagar; }
};
