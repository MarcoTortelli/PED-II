#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

2. Faça um programa que leia o nome, o cargo e o salário de 10 funcionários e escreva os nomes, cargos e respectivos salários em ordem decrescente de salário. Escrever a soma dos salários. Utilizar struct e vector.

*/

#define TAM 2

struct funcionario {
    string nome;
    string cargo;
    float salario;
};

vector<funcionario> funcionarios;
funcionario f;
float salarioTotal = 0;

bool operator<(funcionario &a, funcionario &b) {
    return a.salario > b.salario;
}

int main() {

    for (int i = 0; i < TAM; i++) {
        cout << "Digite o nome do funcionario: ";
        getline(cin, f.nome);
        cout << "Digite o cargo do funcionario: ";
        getline(cin, f.cargo);
        cout << "Digite o salario do funcionario: ";
        cin >> f.salario;
        cin.ignore();
        funcionarios.push_back(f);
        salarioTotal += f.salario;
    }

    sort(funcionarios.begin(), funcionarios.end());

    for (int i = 0; i < TAM; i++) {
        cout << "\nNome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].salario;
    }
    cout << "\nSalario total: " << salarioTotal;

    return 0;
}