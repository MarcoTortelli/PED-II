#include <iostream>

using namespace std;

/*

Os alunos de SI vão participar da Latinoware e precisam fazer um programa que implemente uma lista de chamada, para saber se todos estão no ônibus. Faça um programa que crie uma lista com as seguintes operações:
1 - Inserir nome de aluno na lista
2 - Excluir aluno da lista
3 - Listar os alunos em ordem alfabética
4 - Sair

1. Implementar o programa acima usando array

*/
#define TAM 4
string alunos[TAM];
int cont = 0;
int x;
void inserirAluno() {
    if (cont < TAM) {
        cout << "Informe o nome do aluno: ";
        getline(cin, alunos[cont]);
        cont++;
    }
}

void excluirAluno() {
}

void listarAluno() {
    for (int i = 0; i < cont; i++) {
        cout << alunos[i] << " ";
    }
}
int main() {
    switch (x) {
    case 1:
        inserirAluno();
        break;
    case 2:
        listarAluno();
        break;

    default:
        break;
    }

    return 0;
}