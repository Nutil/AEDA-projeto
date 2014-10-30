#include "Pessoa.h"
#include<stdio.h>


using namespace std;

Pessoa::Pessoa(string nome){
	this->nome = nome;
}
bool Pessoa::add_espaco(Espaco espaco){
	int temp = espacos.size();
	espacos.push_back(&espaco);

	if (temp == espacos.size())return false;
	else return true;
}

/* Nao gosto nada desta metodologia para returnar mensagens de erro... improvements? O ideal era ser um bool, mas temos tres casos*/
int Pessoa::remove_espaco(Espaco espaco){
	if (espacos.size() == 0) return 2; // para o caso de o vetor estar vazio, mensagem de erro diferente

	int temp = espacos.size();//guarda size do vetor pre-eliminaçao de um espaco

	for (int i = 0; i < espacos.size(); i++){
		if (espacos[i]->getNomeEspaco() == espaco.getNomeEspaco()){
			delete espacos[i];
			break;
		}
	}
	if (temp == espacos.size()) return 1; // deu asneira, a size continua igual
	else return 0; // a size nao esta igual, assume se que correu bem e destruiu.

}
