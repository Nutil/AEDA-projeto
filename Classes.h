#ifndef CLASSES_H_
#define CLASSES_H_
#include <string>
#include <vector>

using namespace std;

class Data {

	int dia, mes, ano;
public:
	/*construtor*/
	Data(int dia,int mes,int ano);

	/*Metodos get*/
	int getDia(){return dia;}
	int getMes(){return mes;}
	int getAno(){return ano;}
};

class Espaco {

	string nomeEspaco;
	int preco;
public:
	/*construtor*/
	Espaco(string nomeEspaco, int preco);

	/*Metodos get*/
	string getNomeEspaco(){return nomeEspaco;}
	int getPreco(){return preco;}
};

class Quarto: public Espaco{

	bool duplo, frente; //podiamos fazer isto com bools, era mais facil
public:
	/* Construtor */
	Quarto (string nomeEspaco, int preco, bool duplo, bool frente);

	/* Metodos get */
	bool getDuplo(){return duplo;}
	bool getFrente(){return frente;}
};

class Sala: public Espaco{

	int capacidade;
	bool video, audio; //novamente, podiamos usar bools aqui

public:
	/* Construtor */
	Sala (string nomeEspaco, int preco, int capacidade, bool video, bool audio);

	/*  Metodos get */
	int getCapacidade(){return capacidade;}
	bool getVideo(){return video;}
	bool getAudio(){return audio;}
};

class Funcionario{

	string nomeFuncionario;
	vector<Espaco> espacosResponsavel; //O vector com os espaços pelo qual é responsavel
public:
	/* Construtor */
	Funcionario (string nomeFuncionario,vector<Espaco> espacosResponsavel);

	/* Metodos get */
	string getNomeFuncionario(){return nomeFuncionario;}
	vector<Espaco> getEspacosResponsavel(){return espacosResponsavel;}
};

class Cliente{
	string nomeCliente;
	vector<Espaco> espacosReservados;
	int total_a_pagar; //  Era um bonus fixe, poder saber quanto vai ter de pagar por tudo junto
public:
	/* Construtor */
	Cliente (string nomeCliente, vector<Espaco> espacosReservados, int total_a_pagar);

	/* Metodos get */
	string getNomeCliente(){return nomeCliente;}
	vector<Espaco> getEspacosReservados() {return espacosReservados;}
	int getTotal(){return total_a_pagar;}
};

class Hotel{

	vector<Espaco> espacos;
	vector<Funcionario> funcionarios;
	vector<Cliente> clientes; //nao sei se é necessario
public:
	/*construtor*/
	Hotel (	vector<Espaco> espacos,vector<Funcionario> funcionarios,vector<Cliente> clientes);

	/*Metodos get*/
	vector<Espaco> getEspacos(){return espacos;}
	vector<Funcionario> getFuncionarios(){return funcionarios;}
	vector<Cliente> getClientes(){return clientes;}

};


#endif

