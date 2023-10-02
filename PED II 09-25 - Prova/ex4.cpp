#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<string> feminina;
    queue<string> masculina;
    queue<string> unissex;
    string nome;
    int x;

    do {
        cout << "1 - Entrar na fila feminina" << endl
             << "2 - Entrar na fila masculina" << endl
             << "3 - Chamar para o banheiro feminino" << endl
             << "4 - Chamar para o banheiro masculino" << endl
             << "5 - Chamar para o banheiro unissex" << endl
             << "6 - Sair" << endl;
        cin >>
            x;
        switch (x) {
        case 1:
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, nome);
            feminina.push(nome);
            break;
        case 2:
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, nome);
            masculina.push(nome);
            break;
        case 3:
            if (!feminina.empty()) {
                cout << "Chamando: " << feminina.front() << " para o banheiro" << endl;
                feminina.pop();
            } else {
                cout << "Fila esta vazia\n";
            }
            break;
        case 4:
            if (!masculina.empty()) {
                cout << "Chamando: " << masculina.front() << " para o banheiro" << endl;
                masculina.pop();
            } else {
                cout << "Fila esta vazia\n";
            }
            break;
        case 5:
            if (!feminina.empty()) {
                cout << "Chamando: " << feminina.front() << " para o banheiro" << endl;
                feminina.pop();
            } else if (!masculina.empty()) {
                cout << "Chamando: " << masculina.front() << " para o banheiro" << endl;
                masculina.pop();
            } else {
                cout << "Fila esta vazia\n";
            }
            break;
        }
    } while (x != 6);

    return 0;
}