#include "Hotel.h"
#include<stdio.h>


using namespace std;

/*ESPACOS*/
void Hotel::add_sala(Sala *s){
	s->set_base_price(this->sala_base_price);
	this->salas.push_back(s);
	return;
}

void Hotel::update_salas_taxas(){
	for(unsigned int i=0; i<salas.size(); i++){
		if(salas[i]->get_video())
		{
			salas[i]->set_taxa_video(this->sala_video_taxa);
		}
		if(salas[i]->get_audio())
		{
			salas[i]->set_taxa_audio(this->sala_audio_taxa);
		}
	}
	return;
}

void Hotel::update_sala_base(){

	if(salas.size()!=0){
		salas[0]->set_base_price(this->sala_base_price);
	}

	return;
}


void Hotel::update_quartos_taxa() {

	for (unsigned int i = 0; i < quartos.size(); i++) {
		float k = get_quarto_taxa(quartos[i]->get_location());
		quartos[i]->set_taxa(k);
		cout<<quartos[i]->get_taxa()<<endl;
	}

	return;
}

float Hotel::get_quarto_taxa(string location) {

	if (location == "frente")
		return this->quarto_frente_taxa;
	else if (location == "traseiras")
		return this->quarto_tras_taxa;

	return 0;
}

void Hotel::add_quarto(Quarto *q){

	if(q->get_type()=="simples")
	q->set_base_price(this->simples_base_price);
	else
	q->set_base_price(this->duplo_base_price);

	this->quartos.push_back(q);

	/*
	 * Problema: Preço base engloba quarto simples e duplo e depois faz-se um add ao preço base para quartos duplos
	 * -------------------------------------------------OU---------------------------------------------------------
	 * Tem que se arranjar maneira para se adicionar um preço base para quartos simples e quartos duplos!!!!!!!!!!
	 * */

}


void Hotel::update_quarto_base() {

	for(unsigned int i = 0; i<quartos.size(); i++){
		if(quartos[i]->get_type()=="simples")
		{
			quartos[i]->set_base_price(this->simples_base_price);
		}
		else
			quartos[i]->set_base_price(this->duplo_base_price);
	}

	return;
}

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
