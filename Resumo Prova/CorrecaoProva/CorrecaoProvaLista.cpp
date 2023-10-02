#include <algorithm>
#include <iostream>
#include <list>
using namespace std;

list<string> lista;

int main() {
    int op;
    string t;
    do {
        cout << "1. Inserir tarefa" << endl;
        cout << "2. Mostrar todas as tarefas" << endl;
        cout << "3. Excluir tarefa" << endl;
        cout << "4. Sair" << endl;
        cin >> op;
        if (op == 1) {
            cout << "Tarefa: ";
            cin.ignore();
            getline(cin, t);
            lista.push_back(t);
        }
        if (op == 2) {
            for (string el : lista) {
                cout << el << endl;
            }
        }
        if (op == 3) {
            cout << "Tarefa para excluir: ";
            cin.ignore();
            getline(cin, t);
            if (find(lista.begin(), lista.end(), t) != lista.end()) {
                lista.erase(find(lista.begin(), lista.end(), t));
            } else
                cout << "Nao Achou!" << endl;
        }
    } while (op != 4);
}