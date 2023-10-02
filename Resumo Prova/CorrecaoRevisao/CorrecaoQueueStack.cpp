#include <iostream>
#include <queue>
#include <stack>
using namespace std;
queue<string> fila;
stack<string> pilha;

int main() {
    int op;
    do {
        cout << "1 - Colocar doacao na pilha" << endl;
        cout << "2 - Inserir pessoa na fila" << endl;
        cout << "3 - Fazer a doacao" << endl;
        cout << "4 - Mostrar a quantidade de elementos" << endl;
        cout << "9 - Sair" << endl;
        cout << "Escolha a opcao: ";
        cin >> op;
        if (op == 1) {
            string elem;
            cin.ignore();
            cout << "Doacao para inserir na pilha: ";
            getline(cin, elem);
            pilha.push(elem);
        }
        if (op == 2) {
            string elem;
            cin.ignore();
            cout << "Pessoa para inserir na fila: ";
            getline(cin, elem);
            fila.push(elem);
        }
        if (op == 3) {
            if (!pilha.empty() && !fila.empty()) {
                cout << "Retirado da pilha: " << pilha.top() << endl;
                pilha.pop();
                cout << "Retirado da fila: " << fila.front() << endl;
                fila.pop();
            } else {
                if (pilha.empty())
                    cout << "Pilha vazia!" << endl;
                if (fila.empty())
                    cout << "Fila vazia!" << endl;
            }
        }
        if (op == 4) {
            cout << "Elementos na pilha: " << pilha.size() << endl;
            cout << "Elementos na fila: " << fila.size() << endl;
        }
    } while (op != 9);
}