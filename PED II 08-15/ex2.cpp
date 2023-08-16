#include <iostream>

using namespace std;

/*

2. Fazer um programa que leia 20 nomes e armazene num array. Escreva-os em ordem alfabética. Leia um nome ou parte do nome a pesquisar e escreva se o mesmo está ou não no array.

*/

#define TAM 10

int main() {
    string nome[TAM], pesq;
    bool cont = false;

    for (int i = 0; i < TAM; i++) {
        cout << "Digite o " << i + 1 << "o nome: ";
        getline(cin, nome[i]);
    }

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (nome[i] > nome[j]) {
                swap(nome[i], nome[j]);
            }
        }
    }

    cout << "Digite o que voce quer pesquisar: ";
    cin >> pesq;

    for (int i = 0; i < TAM; i++) {
        if (nome[i].find(pesq) != string::npos) {
            cout << "Achou";
            cont = true;
        }
    }
    if (!cont)
        cout << "Nao achou";

    return 0;
}