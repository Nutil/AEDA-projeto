#ifndef SALA_H_
#define SALA_H_
#include <string>
#include <vector>

using namespace std;

class Sala : public Espaco{

	int capacidade;
	bool video, audio; //novamente, podiamos usar bools aqui

public:
	/* Construtor */
	Sala(string nomeEspaco, int preco, int capacidade, bool video, bool audio);

	/*  Metodos get */
	int getCapacidade(){ return capacidade; }
	bool getVideo(){ return video; }
	bool getAudio(){ return audio; }
};