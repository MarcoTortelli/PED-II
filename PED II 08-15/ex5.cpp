#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

5. Fazer um programa que leia um número não conhecido de valores e armazene num vector (encerrar quando for informado o número 0). Ordene e escreva-os em ordem crescente. Leia um número a pesquisar e escreva se o mesmo está ou não no vector.

*/

vector<int> numeros;
int numero;
bool cont = false;

int main() {
    do {
        cout << "0 - Para sair\nDigite o numero: ";
        cin >> numero;
        if (numero != 0) {
            numeros.push_back(numero);
        }
    } while (numero != 0);

    sort(numeros.begin(), numeros.end());

    for (int i = 0; i < numeros.size(); i++) {
        cout << " " << numeros[i];
    }

    cout << "\nDigite um numero para pesquisar: ";
    cin >> numero;
    if (find(numeros.begin(), numeros.end(), numero) != numeros.end()) {
        cout << "Achou";
        cont = true;
    }

    if (!cont) {
        cout << "Nao achou";
    }

    return 0;
}