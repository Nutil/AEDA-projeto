#include "Main.h"
#include <stdio.h>

using namespace std;


void main(){
	main_menu();
}

void main_menu(){
	system("cls");

	unsigned int selecao;
	cout << "-----------Gestao de Hotel------------" << endl << endl;

	cout << "1. Gestao Pessoas" << endl;
	cout << "2. Gestao Espacos" << endl;
	cout << "3. Gestao Reservas" << endl << endl;

	cout << "A que menu deseja aceder? : ";
	cin >> selecao;

	switch (selecao){
	case 1: menu_pessoas();
		break;
	case 2: menu_espacos();
		break;
	case 3: menu_reservas();
		break;

	}

}
void menu_pessoas(){
	system("cls");

	cout << "-----------Gestao Pessoas-----------" << endl << endl;

	int selecao;

	cout << "1. Clientes" << endl;
	cout << "2. Funcionarios" << endl << endl;
	cout << "0. Voltar atras" << endl << endl;

	cout << "A que menu deseja aceder? :";
	cin >> selecao;

	switch (selecao){
	case 1: menu_clientes();
		break;
	case 2: menu_funcionarios();
		break;
	case 0: main_menu();
		break;
	default: cerr << "Por favor escolha uma opcao existente";
		system("pause");
		menu_pessoas();
	}


}