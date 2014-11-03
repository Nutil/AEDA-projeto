#ifndef DATE_H_
#define DATE_H_
#include <string>
#include <sstream>
using namespace std;
class Date
{

public:
	Date (int ano,int mes, int dia);
	int getDia() const{return this->dia;};
	int getMes() const{return this->mes;};
	int getAno() const{return this->ano;};
	void setDia(int new_day) {this->dia = new_day; return;};
	void setMes(int new_mes) {this->mes = new_mes; return;};
	void setAno(int new_ano) {this->ano = new_ano; return;};
	friend string operator<< (ostream & os , const Date & d1);
	bool operator > (const Date &d1)const;

private:
	int ano,mes,dia;


};



#endif /* DATE_H_ */
