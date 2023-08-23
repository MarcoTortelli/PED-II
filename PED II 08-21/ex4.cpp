#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

4. Faça um programa que leia o nome, o cargo e o salário de 10 funcionários. Leia um código para pesquisar e escreva o seu nome, cargo e respectivo salário ou a mensagem que ele não foi encontrado. Leia a seguir um nome ou parte do nome para pesquisar e escreva o seu nome, cargo e respectivo salário ou a mensagem que ele não foi encontrado. Utilizar vector e struct.

*/

struct funcionario {
    string nome;
    string cargo;
    float salario;
    int codigo;
};

vector<funcionario> funcionarios;

#define TAM 2

int main() {
    funcionario f;
    int auxInt;
    string auxString;
    bool cont = false;
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o codigo do funcionario: ";
        cin >> f.codigo;
        cin.ignore();
        cout << "Digite o nome do funcionario: ";
        getline(cin, f.nome);
        cout << "Digite o cargo do funcionario: ";
        getline(cin, f.cargo);
        cout << "Digite o salario do funcionario: ";
        cin >> f.salario;
        cin.ignore();
        funcionarios.push_back(f);
    }

    cout << "Pesquisar codigo: ";
    cin >> auxInt;
    for (int i = 0; i < TAM; i++) {
        if (auxInt == funcionarios[i].codigo) {
            cont = true;
            cout << "Achou!" << endl;
            cout << "Nome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].cargo;
        }
    }

    if (!cont) {
        cout << "Nao achou";
    }

    cont = false;
    
    cout << "\nPesquisar nome: ";
    getline(cin, auxString);

    for (int i = 0; i < TAM; i++) {

        if (funcionarios[i].nome.find(auxString) != string::npos) {
            cont = true;
            cout << "Achou" << endl;
            cout << "Nome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].cargo;
        }
    }

    if (!cont) {
        cout << "Nao achou";
    }

    return 0;
}