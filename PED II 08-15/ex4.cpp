#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

4. Fazer um programa que leia 20 nomes e armazene num vector. Escreva-os em ordem alfabética. Leia um nome ou parte do nome a pesquisar e escreva se o mesmo está ou não no vector.

*/

vector<string> nomes;
#define TAM 20
string nome;

int main() {
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o " << i + 1 << "o nome: ";
        getline(cin, nome);
        nomes.push_back(nome);
    }

    sort(nomes.begin(), nomes.end());

    for (int i = 0; i < TAM; i++) {
        cout << " " << nomes[i];
    }

    cout << "\nDigite um texto para pesquisar: ";
    cin >> nome;
    if (find(nomes.begin(), nomes.end(), nome) != nomes.end()) {
        cout << "Achou";
    } else {
        cout << "Nao achou";
    }

    return 0;
}