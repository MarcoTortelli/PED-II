#include <iomanip>
#include <iostream>

using namespace std;

/*

1. Faça um programa que leia 10 números. Ordene e escreva os números em ordem crescente. Leia um número a pesquisar e escreva se o mesmo está ou não no vetor.

*/

#define TAM 3

int main() {
    int numero[TAM];
    int pesq;
    bool cont = false;
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> numero[i];
    }
    for (int i = 0; i < TAM - 1; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (numero[i] > numero[j]) {
                swap(numero[i], numero[j]);
            }
        }
    }

    cout << "Digite o numero a ser pesquisado: ";
    cin >> pesq;

    for (int i = 0; i < TAM; i++) {
        if (numero[i] == pesq) {
            cout << "Achou";
            cont = true;
        }
    }

    if (cont == false)
        cout << "Nao achou";

    return 0;
}