#include "Date.h"

Date::Date(int ano, int mes, int dia)
{
	this->ano = ano;
	this->mes = mes;
	this->dia = dia;
}

ostream & operator<<(ostream & os, const Date & d1)
{
	os << d1.dia << "/"<< d1.mes << "/"<<d1.ano;
	return os;
}

bool Date::operator>(const Date & d1)const
{
	if(this->ano > d1.ano)
		return true;
	else if (this->ano == d1.ano)
		if(this->mes > d1.mes)
			return true;
		else if (this->mes == d1.mes)
			if (this->dia > d1.dia)
				return true;
	return false;
}


