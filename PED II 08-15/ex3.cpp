#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

3. Fazer um programa que leia 20 números e armazene num vector. Ordene e escreva-os em ordem crescente. Leia um número a pesquisar e escreva se o mesmo está ou não no vector.

*/
#define TAM 20

vector<int> numeros;
int num;

int main() {
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> num;
        numeros.push_back(num);
    }

    sort(numeros.begin(), numeros.end());

    for (int i = 0; i < TAM; i++) {
        cout << " " << numeros[i];
    }

    cout << "\nDigite um elemento para pesquisar: ";
    cin >> num;
    if (find(numeros.begin(), numeros.end(), num) != numeros.end()) {
        cout << "Achou";
    } else {
        cout << "Nao achou";
    }

    return 0;
}