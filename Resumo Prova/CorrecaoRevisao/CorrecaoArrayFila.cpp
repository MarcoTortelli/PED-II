#include <iostream>
using namespace std;
#define TAM 6
string pilha[TAM];
int topo = 0;
string fila[TAM];
int inicio = 0;
int fim = 0;
int quant = 0;

int main() {
    int op;
    do {
        cout << "1 - Colocar doacao na pilha" << endl;
        cout << "2 - Inserir pessoa na fila" << endl;
        cout << "3 - Fazer a doacao" << endl;
        cout << "9 - Sair" << endl;
        cout << "Escolha a opcao: ";
        cin >> op;
        if (op == 1) {
            if (topo < TAM) {
                cin.ignore();
                cout << "Doacao para inserir na pilha: ";
                getline(cin, pilha[topo++]);
            } else {
                cout << "Pilha cheia!" << endl;
            }
        }
        if (op == 2) {
            if (quant < TAM) {
                cin.ignore();
                cout << "Pessoa para inserir na fila: ";
                getline(cin, fila[fim]);
                fim = (fim + 1) % TAM;
                quant++;
            } else {
                cout << "Fila cheia!" << endl;
            }
        }

        if (op == 3) {
            if (topo > 0 && quant > 0) {
                cout << "Retirado da pilha: " << pilha[--topo] << endl;
                cout << "Retirado da fila: " << fila[inicio] << endl;
                inicio = (inicio + 1) % TAM;
                quant--;
            } else {
                if (topo == 0)
                    cout << "Pilha vazia!" << endl;
                if (quant == 0)
                    cout << "Fila vazia!" << endl;
            }
        }
        if (op == 4) {
            cout << "Elementos na pilha: " << topo << endl;
            cout << "Elementos na fila: " << quant << endl;
        }
    } while (op != 9);
}