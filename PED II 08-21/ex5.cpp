#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*

5. Faça um programa que utilize struct e vector com um menu com as seguintes opções:
1 - Cadastrar: leia o código, o nome, o cargo e o salário de um funcionário e inclua no vector.
2 - Listar: Escreva os dados dos funcionários (código, nome, cargo e salário) em ordem alfabética
3 - Pesquisar por código: Leia um código para pesquisar e escreva o seu nome, cargo e respectivo salário ou a mensagem que ele não foi encontrado.
4 - Pesquisar por nome: Leia um nome ou parte do nome para pesquisar e escreva o seu código, nome, cargo e respectivo salário ou a mensagem que ele não foi encontrado.
5 - Pesquisar por cargo: Leia um cargo para pesquisar e escreva todos os códigos, nomes e respectivos salários que possuem o cargo pesquisado ou a mensagem que não foi encontrado nenhum funcionário.
6 - Escrever a soma dos salários
7 - Escrever a média dos salários
9 - Sair

*/

struct funcionario {
    int codigo;
    string nome;
    string cargo;
    float salario;
};

vector<funcionario> funcionarios;
funcionario f;
int x, auxInt;
string auxString;
bool cont = false;
int somaSalario = 0;
float mediaSalario = 0;
void cadastrarFuncionario() {
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
    somaSalario += f.salario;
    mediaSalario++;
}
void listarFuncionarios() {
    for (int i = 0; i < funcionarios.size(); i++) {
        cout << "\nNome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].salario;
    }
}

void pesquisarCodigoFuncionario() {
    cout << "Pesquisar codigo: ";
    cin >> auxInt;
    for (int i = 0; i < funcionarios.size(); i++) {
        if (auxInt == funcionarios[i].codigo) {
            cont = true;
            cout << "Achou!" << endl;
            cout << "Nome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].cargo;
        }
    }

    if (!cont) {
        cout << "Nao achou";
    }
}
void pesquisarNomeFuncionario() {
    cout << "Pesquisar nome: ";
    cin.ignore();
    getline(cin, auxString);

    for (int i = 0; i < funcionarios.size(); i++) {

        if (funcionarios[i].nome.find(auxString) != string::npos) {
            cont = true;
            cout << "Achou" << endl;
            cout << "\nCodigo: " << funcionarios[i].codigo << "Nome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].cargo;
        }
    }

    if (!cont) {
        cout << "Nao achou";
    }
}
void pesquisarCargoFuncionario() {
    cout << "Pesquisar cargo: ";
    cin.ignore();
    getline(cin, auxString);
    for (int i = 0; i < funcionarios.size(); i++) {

        if (funcionarios[i].cargo.find(auxString) != string::npos) {
            cont = true;
            cout << "Achou" << endl;
            cout << "\nCodigo: " << funcionarios[i].codigo << "Nome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].cargo;
        }
    }

    if (!cont) {
        cout << "Nao achou";
    }
}
void escreverSomaSalarioFuncionarios() {
    cout << "Soma dos salarios: " << somaSalario;
}
void escreverMediaSalarioFuncionarios() {
    mediaSalario = somaSalario / mediaSalario;
    cout << "Media dos salarios: " << mediaSalario;
}

int main() {
    do {

        cout << endl
             << "1 - Cadastrar" << endl
             << "2 - Listar" << endl
             << "3 - Pesquisar codigo" << endl
             << "4 - Pesquisar nome" << endl
             << "5 - Pesquisar cargo" << endl
             << "6 - Escrever soma dos salarios" << endl
             << "7 - Escrever media dos salarios" << endl;

        cin >> x;

        switch (x) {
        case 1:
            cadastrarFuncionario();
            break;
        case 2:
            listarFuncionarios();
            break;
        case 3:
            pesquisarCodigoFuncionario();
            break;
        case 4:
            cont = false;
            pesquisarNomeFuncionario();
            break;
        case 5:
            cont = false;
            pesquisarCargoFuncionario();
            break;
        case 6:
            escreverSomaSalarioFuncionarios();
            break;
        case 7:
            escreverMediaSalarioFuncionarios();
            break;

        default:
            break;
        }
    } while (x != 9);

    return 0;
}
