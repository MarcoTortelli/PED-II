#include <algorithm>
#include <iostream>


using namespace std;

/*

Os alunos de SI vão participar da Latinoware e precisam fazer um programa que implemente uma lista de chamada, para saber se todos estão no ônibus. Faça um programa que crie uma lista com as seguintes operações:
1 - Inserir nome de aluno na lista
2 - Excluir aluno da lista
3 - Listar os alunos em ordem alfabética
4 - Sair

3. Implementar o programa acima usando list (C++)

*/
#define TAM 4
string alunos[TAM];
int quant = 0;
int x;

void inserirAluno() {
}
void excluirAluno() {
}
void listarAlunos() {
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