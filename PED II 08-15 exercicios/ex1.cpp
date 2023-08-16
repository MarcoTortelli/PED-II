
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

1. Faça um programa que leia 10 números usando vector do C++. Ordene e escreva os números em ordem crescente. Leia um número a pesquisar e escreva se o mesmo está ou não no vector.

*/

#define TAM 3

vector<int> v;

int main() {
    int x;
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o " << i + 1 << "o valor: ";

        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < TAM; i++) {
        cout << " " << v[i];
    }

    cout << "\nPesquisar: ";
    cin >> x;
    if (find(v.begin(), v.end(), x) != v.end()) {
        cout << "Achou" << endl;
    } else {
        cout << "Nao Achou" << endl;
    }
    return 0;
}