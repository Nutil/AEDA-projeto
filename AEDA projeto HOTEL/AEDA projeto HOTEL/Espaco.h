#ifndef _ESPACO_H_
#define _ESPACO_H_

#include <string>
#include "Date.h"
using namespace std;

/**********************************************************/
/*****************CLASS ESPACO****************************/
//
class Espaco {
	Cliente *cli; //este cliente aqui
public:
	Espaco();
	virtual float get_base_price() = 0;
	virtual float get_cost() = 0;
	virtual int get_id() = 0;
	virtual string get_type() = 0;
	//virtual string get_location() = 0;
	//virtual float get_taxa() = 0;
	//virtual void set_taxa(float taxa) = 0;/*How will this work for sala?*/
	virtual void set_base_price(float price) = 0;
	Cliente *getCliente() {	return this->cli;}
	void setCliente(Cliente *c) {this->cli = c;	}
};

/**********************************************************/
/*****************CLASS SALA****************************/

class Sala: public Espaco {
	int id;
	static int _ID;
	static float base_price;
	bool video, audio;
	float taxa_video;
	float taxa_audio;
	string type;
	Date reserva;
public:
	Sala(bool video, bool audio);
	float get_base_price() {
		return this->base_price;
	}
	float get_cost();
	int get_id() {
		return this->id;
	}
	string get_type() {
		return this->type;
	}
	void set_base_price(float price) {
		this->base_price = price;
		return;
	}
	bool get_audio() {
		return this->audio;
	}
	bool get_video() {
		return this->video;
	}
	float get_taxa_video() {
		return this->taxa_video;
	}
	float get_taxa_audio() {
		return this->taxa_audio;
	}
	void set_taxa_video(float taxa_video) {
		this->taxa_video = taxa_video;
		return;
	}
	void set_taxa_audio(float taxa_audio) {
		this->taxa_audio = taxa_audio;
		return;
	}
	bool reserva_sala(Date &d1);
	Date get_reserva() {
		return this->reserva;
	}
	;
	Cliente *getCliente() {
		return Espaco::getCliente();
	}	//Done!
};

/**********************************************************/
/*****************CLASS QUARTO****************************/

class Quarto: public Espaco {
	float taxa; /*Taxa de location (Se frente X se trazeira Y)*/
	string location;
	Date reserva;
public:
	Quarto(string location);
	void set_taxa(float taxa) {
		this->taxa = taxa;
		return;
	}
	float get_taxa() {
		return this->taxa;
	}
	string get_location() {
		return location;
	}
	virtual float get_base_price() = 0;
	virtual float get_cost() = 0;
	virtual int get_id() = 0;
	virtual string get_type() = 0;
	virtual void set_base_price(float price);
	virtual bool reserva_quarto(Date &d1); //-Alexandre
	virtual Date get_reserva(){return this->reserva;}
	//-Alexandre


};

/**********************************************************/
/*****************CLASS SIMPLES****************************/

class Simples: public Quarto {
	int id;
	static int _ID;
	float base_price;
	string type;
public:
	Simples(string location);
	float get_base_price() {
		return this->base_price;
	}
	float get_cost();
	int get_id() {
		return this->id;
	}
	string get_type() {
		return this->type;
	}
	void set_base_price(float price) {
		this->base_price = price;
		return;
	}
	bool reserva_quarto(Date &d1, Cliente * cliente); //-Alexandre
	Date get_reserva() {
		return Quarto::get_reserva();
	}
	; //-Alexandre
	Cliente *getCliente() {
		return Espaco::getCliente();
	} //Done!
	//queres que faça o mesmo?
};

/**********************************************************/
/*****************CLASS DUPLO****************************/

class Duplo: public Quarto {
	int id;
	static int _ID;
	float base_price;
	string type;
public:
	Duplo(string location);
	float get_base_price() {
		return this->base_price;
	}
	float get_cost();
	int get_id() {
		return this->id;
	}
	string get_type() {
		return this->type;
	}
	void set_base_price(float price) {
		this->base_price = price;
		return;
	}
	bool reserva_quarto(Date &d1); //-Alexandre
	Date get_reserva() {
		return Quarto::get_reserva();
	} //-Alexandre
	Cliente *getCliente() {
		return Espaco::getCliente();
	}
};

#endif /* _ESPACO_H_ */
