#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

/*

4. Fazer um programa que permite criar uma lista de tarefas usando vector ou list.
O programa deve ter um menu com as opções:

Inserir tarefa
Mostrar todas as tarefas
Excluir tarefa
Sair

*/

list<string> tarefas;

int main() {
    int x;
    string aux;
    do {
        cout << "1 - Inserir tarefa " << endl;
        cout << "2 - Mostrar todas as tarefas " << endl;
        cout << "3 - Excluir tarefa " << endl;
        cout << "0 - Sair " << endl;

        cin >> x;

        switch (x) {
        case 1:
            cin.ignore();
            getline(cin, aux);
            tarefas.push_back(aux);
            break;
        case 2:
            for (auto i : tarefas) {
                cout << i << endl;
            }
            break;
        case 3:
            cout << "Elemento para excluir: ";
            cin.ignore();
            getline(cin, aux);
            if (find(tarefas.begin(), tarefas.end(), aux) != tarefas.end()) {
                tarefas.erase(find(tarefas.begin(), tarefas.end(), aux));
            } else
                cout << "Nao Achou!" << endl;

            break;
        default:
            break;
        }
    } while (x != 0);
}