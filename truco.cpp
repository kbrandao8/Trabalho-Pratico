#include <iostream>
#include <utility>
#include "truco.h"
/**
* @Truco.cpp
* Inicialização do baralho e criação dos jogadores
*/

int main() {
	deck D = deck();
	menu M = menu();
	vector<player*> jogadores;
	pair<int, int> par = M.get_jogadores();
	int jogador_comecar_jogando = 0;
	if (par.second == 0) {
		for (int i = 0; i < par.first; i++) {
			string nome;
			cin.clear();
			fflush(stdin);
			cout << "Diga o nome do humano " << i + 1 << ": ";
			cin >> nome;
			jogadores.push_back(new human(nome, D));
		}
		for (int j = par.first; j < 4; j++) {
			jogadores.push_back(new bot(D));
		}
	} else if (par.second == 1) {
		for (int i = 0; i < 2; i++) {
			string nome;
			cin.clear();
			fflush(stdin);
			cout << "Diga o nome do humano " << i + 1 << ": ";
			cin >> nome;
			jogadores.push_back(new human(nome, D));
			jogadores.push_back(new bot(D));
		}
	} else {
		for (int i = 0; i < 2; i++) {
			string nome;
			cin.clear();
			fflush(stdin);
			cout << "Diga o nome do humano " << i + 1 << ": ";
			cin >> nome;
			jogadores.push_back(new human(nome, D));
		} 
		for (int i = 0; i < 2; i++) {
			jogadores.push_back(new bot(D));
		}
	}
}
