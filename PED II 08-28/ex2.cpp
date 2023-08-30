#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

Os alunos de SI vão participar da Latinoware e precisam fazer um programa que implemente uma lista de chamada, para saber se todos estão no ônibus. Faça um programa que crie uma lista com as seguintes operações:
1 - Inserir nome de aluno na lista
2 - Excluir aluno da lista
3 - Listar os alunos em ordem alfabética
4 - Sair

2. Implementar o programa usando vector

*/
#define TAM 4
vector<string> alunos;
int x = 0;
int aux;
string aluno;

void inserirAluno() {
    cout << "Digite o nome do aluno: ";
    cin.ignore();
    getline(cin, aluno);
    alunos.push_back(aluno);
}
void excluirAluno() {
    cout << "Digite o numero do aluno: ";
    cin >> aux;
    alunos.erase(alunos.begin() + aux);
}
void listarAlunos() {
    for (int i = 0; i < alunos.size(); i++) {
        cout << i + 1 << " - " << alunos[i] << endl;
    }
}
int main() {

    do {
        cout << "1 - Inserir nome de aluno na lista\n"
             << "2 - Excluir aluno da lista\n"
             << "3 - Listar os alunos em ordem alfabetica\n"
             << "4 - Sair\n";
        cin >> x;

        switch (x) {
        case 1:
            inserirAluno();
            break;
        case 2:
            excluirAluno();
            break;
        case 3:
            listarAlunos();
            break;
        }
    } while (x != 4);

    return 0;
}