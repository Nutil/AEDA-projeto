#ifndef Data_H_
#define Data_H_
#include <string>
#include <vector>
#include <iostream>

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

	/*Metodos nao get*/
	int Data::dateToMinutes(Data date);
	int Data::dateDifferenceS(Data date1, Data date2);
};
#endif;