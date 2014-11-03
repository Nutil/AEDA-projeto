#include "Date.h"

Date::Date(int ano, int mes, int dia)
{
	this->ano = ano;
	this->mes = mes;
	this->dia = dia;
}

ostream & operator<<(ostream & os, const Date & d1)
{
	os << d1.getDia() << "/"<< d1.getMes() << "/"<<d1.getAno();
	return os;
}

bool Date::operator>(const Date & d1) const {
	if (this->ano > d1.ano)
		return true;
	else if (this->ano == d1.ano){
		if (this->mes > d1.mes)
			return true;

		else if (this->mes == d1.mes)
			if (this->dia > d1.dia)
				return true;
	}


	return false;
}

inline Date & Date::operator++(int) {
	if (mes == 4|| mes ==6|| mes ==9|| mes ==11)
	{
		if(dia == 30)
		{
			dia = 1;
			mes++;
		}
		else
			dia++;
	}
	else if (mes == 1 || mes ==3 || mes ==5|| mes ==7|| mes ==8|| mes ==10)
		if(dia == 31)
		{
			dia = 1;
			mes++;
		}
		else
			dia++;
	else if (mes == 2){
		if(ano % 4 == 0)
		{
			if (dia == 29)
			{
				dia = 1;
				mes++;
			}
			else
				dia++;
		}
		else if (ano % 4 != 0)
		{
			if (dia == 28)
			{
				dia = 1;
				mes++;
			}
			else
				dia++;
		}
	}
	else if (mes == 12){
		if(dia ==31)
		{
			dia = 1;
			mes = 1;
			ano++;
		}
		else
			dia++;
	}
	else
		break;

	return *this;

}






