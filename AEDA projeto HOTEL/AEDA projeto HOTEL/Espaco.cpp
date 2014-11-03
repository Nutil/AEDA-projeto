/*
 * Espaco.cpp
 *
 *  Created on: 31/10/2014
 *      Author: John Doe
 */
#include "Espaco.h"

int Sala::_ID=0;/*Espaco - Sala*/
float Sala::base_price=0;
int Simples::_ID=0;/*Quartos simples*/
int Duplo::_ID=0;/*Quartos duplos*/

Espaco::Espaco()
{
	cli = NULL;
}

Sala::Sala(bool video, bool audio):id(_ID+=1){
	this->video = video;
	this->audio = audio;
	this->type = "sala";
	this->taxa_video=0;
	this->taxa_audio=0;
	Date data(1970,1,1);
	reserva = data;

}

bool Sala::reserva_sala(Date &d1)
{
	Date diadoje(3,11,2014);
	if (diadoje > d1)
		return false;
	else{
		reserva = d1;
		return true;
	}
}

float Sala::get_cost(){
	return (this->base_price + (this->taxa_audio*this->base_price) + (this->taxa_video*this->base_price));
}


Quarto::Quarto(string location) {
	this->location = location;
	this->taxa=0;
	Date data(1970,1,1);
	reserva = data;
}



Simples::Simples(string location):Quarto(location), id(_ID+=1){
	this->type = "simples";
	this->base_price=0;
}

float Simples::get_cost(){
	return (this->base_price + (Quarto::get_taxa()*this->base_price));
}

bool Simples::reserva_quarto(Date &d1, Cliente * cliente)
{
	Date diadoje(3,11,2014);
		if (diadoje > d1)
			return false;
		else{
			reserva = d1;
			return true;
			Espaco::setCliente(cliente);
		}
}

Duplo::Duplo(string location):Quarto(location), id(_ID+=1){
	this->type = "duplo";
	this->base_price=0;
}

float Duplo::get_cost(){
	return (this->base_price + (Quarto::get_taxa()*this->base_price));
}

bool Duplo::reserva_quarto(Date &d1)
{
	Date diadoje(3,11,2014);
		if (diadoje > d1)
			return false;
		else{
			reserva = d1;
			return true;
		}
}



