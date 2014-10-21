#include "Data.h"
#include<stdio.h>

using namespace std;

Data::Data(int dia, int mes, int ano){
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}


int Data::dateToMinutes(Data date){
	int res = 0;
	int temp1, temp2, temp3;

	temp1 = ano * 365 * 24 * 60;//numero de minutos nos anos
	temp2 = dia * 



		return res;
}
int Data::dateDifferenceS(Data date1, Data date2){
	int res = 0;
	int anodiff = date2.ano - date1.ano;
	int mesdiff = date2.mes - date1.mes;
	int diadiff = date2.dia - date1.dia;


}