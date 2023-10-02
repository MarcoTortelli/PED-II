#include <iostream>
#include <queue>
using namespace std;

queue<string> fila1;
queue<string> fila2;
queue<string> fila3;

int main() {
    int op, tipo;
    string nome;
    do {
        cout << "1. Entrar na fila" << endl;
        cout << "2. Retirar da fila" << endl;
        cout << "3. Sair";
        if (op == 1) {
            cout << "Tipo de fila [1-emerg 2-urg 3-normal]:" << endl;
            cin >> tipo;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            if (tipo == 1)
                fila1.push(nome);
            if (tipo == 2)
                fila2.push(nome);
            if (tipo == 3)
                fila3.push(nome);
        }
        if (op == 2) {
            if (!fila1.empty()) {
                cout << "Retirado da 1: " << fila1.front() << endl;
                fila1.pop();
            } else if (!fila2.empty()) {
                cout << "Retirado da 2: " << fila2.front() << endl;
                fila2.pop();
            } else if (!fila3.empty()) {
                cout << "Retirado da 3: " << fila3.front() << endl;
                fila3.pop();
            } else {
                cout << "Filas vazias!" << endl;
            }
        }
    } while (op != 3);
}
