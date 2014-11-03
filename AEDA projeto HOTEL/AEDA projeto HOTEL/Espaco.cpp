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

Sala::Sala(bool video, bool audio):id(_ID+=1){
	this->video = video;
	this->audio = audio;
	this->type = "sala";
	this->taxa_video=0;
	this->taxa_audio=0;
}

float Sala::get_cost(){
	return (this->base_price + (this->taxa_audio*this->base_price) + (this->taxa_video*this->base_price));
}


Quarto::Quarto(string location) {
	this->location = location;
	this->taxa=0;
}

Simples::Simples(string location):Quarto(location), id(_ID+=1){
	this->type = "simples";
	this->base_price=0;
}

float Simples::get_cost(){
	return (this->base_price + (Quarto::get_taxa()*this->base_price));
}

Duplo::Duplo(string location):Quarto(location), id(_ID+=1){
	this->type = "duplo";
	this->base_price=0;
}

float Duplo::get_cost(){
	return (this->base_price + (Quarto::get_taxa()*this->base_price));
}




