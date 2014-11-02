#include "Hotel.h"
#include <stdio.h>

using namespace std;
void main();

void main_menu(Hotel hotel);

void menu_pessoas(Hotel hotel);

void menu_clientes(Hotel hotel);
void menu_adiciona_cliente(Hotel hotel);
void menu_remove_cliente(Hotel hotel);
void menu_remove_espaco_cli(Hotel hotel);
void menu_add_espaco_cli(Hotel hotel);
void menu_update_nome_cli(Hotel hotel);
void menu_update_espaco_cli(Hotel hotel);

void menu_funcionarios(Hotel hotel);

void menu_adiciona_funcionario(Hotel hotel);
void menu_remove_funcionario(Hotel hotel);
void menu_remove_espaco_func(Hotel hotel);
void menu_add_espaco_func(Hotel hotel);
void menu_update_nome_func(Hotel hotel);
void menu_update_espaco_func(Hotel hotel);
void menu_update_ordenado_func(Hotel hotel);
/*
void menu_espacos(Hotel hotel);

void menu_salas(Hotel hotel);

void menu_quartos(Hotel hotel);

void menu_reservas(Hotel hotel);
*/


void main_menu(Hotel hotel){
	system("cls");

	unsigned int selecao;
	cout << "-----------Gestao de Hotel------------" << endl << endl;


	cout << "1. Gestao Pessoas" << endl;
	cout << "2. Gestao Espacos" << endl;
	cout << "3. Gestao Reservas" << endl << endl;

	cout << "A que menu deseja aceder? : ";
	cin >> selecao;
	if (cin.fail()){
		cout << "Por favor escolha uma opcao existente";
		system("pause");
		menu_clientes(hotel);
	}
	switch (selecao){
	case 1: menu_pessoas(hotel);
		break;
	/*case 2: menu_espacos(hotel);
		break;
	case 3: menu_reservas(hotel);
		break;*/
	default: cout << endl << endl << "Por favor escolha uma opcao existente" << endl;
		system("pause");
		main_menu(hotel);
		break;
	}

}

void menu_pessoas(Hotel hotel){
	system("cls");

	cout << "-----------Gestao Pessoas-----------" << endl << endl;

	int selecao;

	cout << "1. Clientes" << endl;
	cout << "2. Funcionarios" << endl << endl;
	cout << "0. Voltar atras" << endl << endl;

	cout << "A que menu deseja aceder? :";
	cin >> selecao;
	if (cin.fail()){
		cout << "Por favor escolha uma opcao existente";
		system("pause");
		menu_clientes(hotel);
	}
	switch (selecao){
	case 1: menu_clientes(hotel);
		break;
	/*case 2: menu_funcionarios(hotel);
		break;*/
	case 0: main_menu(hotel);
		break;
	default: cerr << "Por favor escolha uma opcao existente";
		system("pause");
		menu_pessoas(hotel);
		break;
	}


}

void menu_clientes(Hotel hotel){
	system("cls");

	cout << "-----------Gestao Clientes-----------" << endl << endl;

	cout << "1. Adicionar Cliente" << endl;
	cout << "2. Remover Cliente" << endl;
	cout << "3. Atualizar nome" << endl;
	cout << "4. Adicionar espaco" << endl;
	cout << "5. Remover espaco" << endl;
	cout << "6. Atualizar espaco" << endl << endl;
	cout << "0. Voltar atras" << endl << endl;

	int selecao;
	cout << "O que pretende fazer?" << endl << endl;
	cin >> selecao;
	if (cin.fail()){
	cout << "Por favor escolha uma opcao existente";
	system("pause");
	menu_clientes(hotel);
}

	switch (selecao){
	case 1: menu_adiciona_cliente(hotel);
		break;
	case 2: menu_remove_cliente(hotel);
		break;
	case 3: menu_update_nome_cli(hotel);
		break;
	case 4: menu_add_espaco_cli(hotel);
		break;
	case 5: menu_remove_espaco_cli(hotel);
		break;
	case 6: menu_update_espaco_cli(hotel);
		break;
	case 0: menu_pessoas(hotel);
		break;
	default: cerr << "Por favor escolha uma opcao existente";
		system("pause");
		menu_clientes(hotel);
		break;
	}

}
void menu_adiciona_cliente(Hotel hotel){
	system("cls");
	string nomecliente;
	cout << "Por favor indique o nome do cliente que pretende adicionar : ";
	cin.ignore();
	cin.clear();
	getline(cin, nomecliente);
	hotel.adiciona_cliente(nomecliente);
	cout << " \nO seu cliente foi adicionado. Lista dos clientes atuais:" << endl << endl;
	hotel.display_clientes();
	cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
	system("pause");

	menu_clientes(hotel);
	}
void menu_remove_cliente(Hotel hotel){
	system("cls");
	string nomecliente;
	cout << "Por favor indique o nome do cliente que pretende remover : ";
	getline(cin,nomecliente);
	if (hotel.remove_cliente(nomecliente)){
		cout << " \nO seu cliente foi removido. Lista dos clientes atuais:" << endl << endl;
	}
	else {
		cout << "\nO seu cliente nao existe no hotel. Lista dos clientes atuais:" << endl << endl;
	}

	hotel.display_clientes();
	cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
	system("pause");

	menu_clientes(hotel);
}
void menu_update_nome_cli(Hotel hotel){
	system("cls");

	string nomeCli;
	cout << "Por favor insira o nome do cliente que pretende atualizar";
	getline(cin,nomeCli);
	int i = hotel.encontra_cliente(nomeCli);
	//Nao encontrou
	if (i == -1){
		cout << endl <<"Nao encontramos nenhum cliente com esse nome. Lista de clientes atuais :" << endl;
	}
	//encontrou
	else {
		hotel.getClientes()[i]->update_nome(nomeCli);// isto funciona?
		cout << "O nome do seu cliente foi atualizado. Lista de clientes atuais :" << endl << endl;
	}

	hotel.display_clientes();
	cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
	system("pause");
	menu_clientes(hotel);
}
void menu_add_espaco_cli(Hotel hotel){
	system("cls");

	string nomeCli;
	cout << "Por favor insira o nome do cliente a quem pretende atribuir um espaco";
	getline(cin,nomeCli);
	int i = hotel.encontra_cliente(nomeCli);
	//Nao encontrou
	if (i == -1){
		cout << endl << "Nao encontramos nenhum cliente com esse nome. Lista de clientes atuais :" << endl;
		hotel.display_clientes();
		cout << endl << "O programa voltara ao menu de gestao de clientes" << endl;
		system("pause");
		menu_clientes(hotel);
	}
	//encontrou
	else {
		string nomeEspaco;
		cout << endl << "Por favor indique o nome do espaco que quer adicionar: ";
		getline(cin, nomeEspaco);
		Espaco espaco(nomeEspaco);
		if (hotel.getClientes()[i]->add_espaco(espaco)){
			cout << "O espaco foi adicionado ao seu cliente. Lista de espacos do seu cliente: " << endl << endl;
		}
		else{
			cout << "Nao conseguimos adicionar o espaco ao seu cliente. A informacao do seu cliente: " << endl << endl;
		}

		hotel.getClientes()[i]->info();
		cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
		system("pause");
		menu_clientes(hotel);

	}

}
void menu_remove_espaco_cli(Hotel hotel){
	system("cls");

	string nomeCli;
	cout << "Por favor insira o nome do cliente a quem pretende remover um espaco";
	getline(cin,nomeCli);
	int i = hotel.encontra_cliente(nomeCli);
	//Nao encontrou
	if (i == -1){
		cout << endl << "Nao encontramos nenhum cliente com esse nome. Lista de clientes atuais :" << endl;
		hotel.display_clientes();
		cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
		system("pause");
		menu_clientes(hotel);
	}
	//encontrou
	else {
		string nomeEspaco;
		cout << endl << "Por favor indique o nome do espaco que quer remover: ";
		getline(cin, nomeEspaco);
		Espaco espaco(nomeEspaco);
		if (hotel.getClientes()[i]->remove_espaco(espaco)){
			cout << "O espaco foi removido ao seu cliente. A informacao do seu cliente: " << endl << endl;
		}
		else{
			cout << "Nao conseguimos remover o espaco ao seu cliente. A informacao do seu cliente: " << endl << endl;
		}

		hotel.getClientes()[i]->info();
		cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
		system("pause");
		menu_clientes(hotel);

	}


}
/* Esta é uma funcao modelo, so pode ser implementada quando a estrutura de um Espaco estiver completa */
void menu_update_espaco_cli(Hotel hotel){
	system("cls");

	string nomeCli;
	cout << "Por favor insira o nome do cliente cujo espaco pretende atualizar: ";
	getline(cin,nomeCli);
	int i = hotel.encontra_cliente(nomeCli);
	//Nao encontrou
	if (i == -1){
		cout << endl << "Nao encontramos nenhum cliente com esse nome. Lista de clientes atuais :" << endl;
		hotel.display_clientes();
		cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
		system("pause");
		menu_clientes(hotel);
	}
	//encontrou
	else {
		string nomeEspaco;
		cout << endl << "Por favor indique o nome do espaco que quer atualizar: ";
		getline(cin, nomeEspaco);
		Espaco espaco(nomeEspaco);
		if (hotel.getClientes()[i]->remove_espaco(espaco)){
			cout << "O espaco do seu cliente foi atualizado. A informacao do seu cliente: " << endl << endl;
		}
		else{
			cout << "Nao conseguimos atualizar o espaco do seu cliente. A informacao do seu cliente: " << endl << endl;
		}

		hotel.getClientes()[i]->info();
		cout << endl << "O programa voltará ao menu de gestão de clientes" << endl;
		system("pause");
		menu_clientes(hotel);

	}



}

void menu_funcionarios(Hotel hotel){
	system("cls");

	cout << "-----------Gestao Funcionarios-----------" << endl << endl;

	cout << "1. Adicionar Funcionario" << endl;
	cout << "2. Remover Funcionario" << endl;
	cout << "3. Atualizar nome" << endl;
	cout << "4. Adicionar espaco" << endl;
	cout << "5. Remover espaco" << endl;
	cout << "6. Atualizar espaco" << endl << endl;
	cout << "0. Voltar atras" << endl << endl;

	int selecao;
	cout << "O que pretende fazer?" << endl << endl;
	cin >> selecao;
	if (cin.fail()){
		cout << "Por favor escolha uma opcao existente";
		system("pause");
		menu_funcionarios(hotel);
	}

	switch (selecao){
	case 1: menu_adiciona_funcionario(hotel);
		break;
	case 2: menu_remove_funcionario(hotel);
		break;
	case 3: menu_update_nome_func(hotel);
		break;
	case 4: menu_add_espaco_func(hotel);
		break;
	case 5: menu_remove_espaco_func(hotel);
		break;
	case 6: menu_update_espaco_func(hotel);
		break;
	case 7: menu_update_ordenado_func(hotel);
		break;
	case 0: menu_pessoas(hotel);
		break;
	default: cerr << "Por favor escolha uma opcao existente";
		system("pause");
		menu_funcionarios(hotel);
		break;
	}


}
void menu_adiciona_funcionario(Hotel hotel){
	system("cls");
	string nomefuncionario;
	cout << "Por favor indique o nome do funcionario que pretende adicionar : ";
	cin.ignore();
	cin.clear();
	getline(cin, nomefuncionario);
	hotel.adiciona_funcionario(nomefuncionario);
	cout << " \nO seu funcionario foi adicionado. Lista dos funcionarios atuais:" << endl << endl;
	hotel.display_funcionarios();
	cout << endl << "O programa voltará ao menu de gestão de funcionarios" << endl;
	system("pause");

	menu_funcionarios(hotel);

}
void menu_remove_funcionario(Hotel hotel){
	system("cls");
	string nomefuncionario;
	cout << "Por favor indique o nome do funcionario que pretende remover : ";
	getline(cin, nomefuncionario);
	if (hotel.remove_funcionario(nomefuncionario)){
		cout << " \nO seu funcionario foi removido. Lista dos funcionarios atuais:" << endl << endl;
	}
	else {
		cout << "\nO seu funcionario nao existe no hotel. Lista dos funcionarios atuais:" << endl << endl;
	}
	
	hotel.display_funcionarios();
	cout << endl << "O programa voltará ao menu de gestão de funcionarios" << endl;
	system("pause");

	menu_funcionarios(hotel);
}
void menu_update_nome_func(Hotel hotel){
	system("cls");

	string nomefunc;
	cout << "Por favor insira o nome do funcionario que pretende atualizar";
	getline(cin, nomefunc);
	int i = hotel.encontra_funcionario(nomefunc);
	//Nao encontrou
	if (i == -1){
		cout << endl << "Nao encontramos nenhum funcionario com esse nome. Lista de funcionarios atuais :" << endl;
	}
	//encontrou
	else {
		hotel.getFuncionarios()[i]->update_nome(nomefunc);// isto funciona?
		cout << "O nome do seu funcionario foi atualizado. Lista de funcionarios atuais :" << endl << endl;
	}

	hotel.display_funcionarios();
	cout << endl << "O programa voltará ao menu de gestão de funcionarios" << endl;
	system("pause");
	menu_funcionarios(hotel);
}

void main(){
	Hotel hotel;
	main_menu(hotel);
}