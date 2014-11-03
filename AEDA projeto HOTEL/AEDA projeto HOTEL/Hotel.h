#ifndef _HOTEL_H_
#define _HOTEL_H_

#include "Pessoa.h"
#include "Cliente.h"
#include "Funcionario.h"
#include "Espaco.h"
#include <vector>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

class Hotel{
	float duplo_base_price;
	float simples_base_price;
	float sala_base_price;
	float quarto_frente_taxa;
	float quarto_tras_taxa;
	float sala_video_taxa;
	float sala_audio_taxa;

	vector<Sala* > salas;
	vector<Quarto *> quartos;
	//vector<Espaco *> espacos; de momento não é necessario
	vector<Funcionario *> funcionarios;
	vector<Cliente *> clientes; 
public:
	/*construtor*/
	//precisa SIM!!!!
	/*Parte Joao!*/
	Hotel(){}
	vector<Quarto *> get_quartos(){return this->quartos;}
	vector<Sala *> get_salas(){return this->salas;}
	void add_quarto(Quarto *q);
	void add_sala(Sala *s);

	void set_simples_base_price(float price){this->simples_base_price = price; return;}
	void set_duplo_base_price(float price){this->duplo_base_price = price; return;}
	void set_sala_base_price(float price){this->sala_base_price = price; return;}

	float get_simples_base_price(){return this->simples_base_price;}
	float get_duplo_base_price(){return this->duplo_base_price;}
	float get_sala_base_price(){return this->sala_base_price;}

	void set_quarto_frente_taxa(float taxa){this->quarto_frente_taxa = taxa; return;}
	void set_quarto_tras_taxa(float taxa){this->quarto_tras_taxa = taxa; return;}

	void set_sala_video_taxa(float taxa){this->sala_video_taxa = taxa; return;}
	void set_sala_audio_taxa(float taxa){this->sala_audio_taxa = taxa; return;}

	void update_quartos_taxa();
	void update_salas_taxas();
	void update_quarto_base();
	void update_sala_base();
	float get_quarto_taxa(string location);
	
	/*Metodos get*/
	//vector<Espaco *> getEspacos(){ return espacos; }
	vector<Funcionario *> getFuncionarios(){ return funcionarios; }
	vector<Cliente *> getClientes(){ return clientes; }

	/* Metodos Sobre Clientes */
	int soma_totais();
	int encontra_cliente(string nome);
	void adiciona_cliente(string nome);
	bool remove_cliente(string nome);
	void display_clientes();

	/* Metodos Sobre Funcionarios */
	int encontra_funcionario(string nome);
	void adiciona_funcionario(string nome);
	bool remove_funcionario(string nome);
	void display_funcionarios();
	
};
#endif;