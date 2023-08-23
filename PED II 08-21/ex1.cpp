#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

/*

1. Faça um programa que leia o nome, o cargo e o salário de 10 funcionários e escreva os nomes, cargos e respectivos salários em ordem decrescente de salário. Escrever a soma dos salários. Utilizar struct e array.

*/

#define TAM 2

struct funcionario {
    string nome;
    string cargo;
    float salario;
};

funcionario funcionarios[TAM];
float salarioTotal = 0;

int main() {
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o nome do funcionario: ";
        getline(cin, funcionarios[i].nome);
        cout << "Digite o cargo do funcionario: ";
        getline(cin, funcionarios[i].cargo);
        cout << "Digite o salario do funcionario: ";
        cin >> funcionarios[i].salario;
        cin.ignore();
        salarioTotal += funcionarios[i].salario;
    }

    for (int i = 0; i < TAM - 1; i++) {
        for (int j = i + 1; j < TAM; j++) {
            if (funcionarios[i].salario < funcionarios[j].salario) {
                swap(funcionarios[i], funcionarios[j]);
            }
        }
    }

    for (int i = 0; i < TAM; i++) {
        cout << "\nNome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].salario;
    }

    cout << "\nA soma dos salarios:" << salarioTotal;

    return 0;
}