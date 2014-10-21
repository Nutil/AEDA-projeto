#ifndef Data_H_
#define Data_H_
#include <string>
#include <vector>

using namespace std;

class Data {

	int dia, mes, ano;
public:
	/*construtor*/
	Data(int dia, int mes, int ano);

	/*Metodos get*/
	int getDia(){ return dia; }
	int getMes(){ return mes; }
	int getAno(){ return ano; }
};