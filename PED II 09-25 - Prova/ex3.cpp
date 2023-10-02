#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Cadastro {
    int numero;
    string nome;
    float nota;
};

#define MAX 20

vector<Cadastro> cadastros;

int numCadastros;
int numero;
string nome;
float nota;

bool comparaCadastros(Cadastro &a, Cadastro &b) {
    return a.nota > b.nota;
}

int main() {
    for (int i = 0; i < MAX; i++) {
        Cadastro c;
        cout << "Digite o numero de inscricao: ";
        cin >> c.numero;
        if (c.numero == 0) {
            break;
        }
        cout << "Digite o nome: ";
        cin.ignore();
        getline(cin, c.nome);
        do {
            cout << "Digite a nota: ";
            cin >> c.nota;
        } while (c.nota > 10 || c.nota < 0);

        cadastros.push_back(c);

        numCadastros++;
    }

    sort(cadastros.begin(), cadastros.end(), comparaCadastros);

    for (int i = 0; i < 3; i++) {
        if (cadastros[i].nota >= 7) {
            cout << i + 1 << " - " << cadastros[i].numero << " - " << cadastros[i].nome << " - " << cadastros[i].nota << endl;
        }
    }
    cout << "Suplentes: " << endl;
    for (int i = 3; i < MAX; i++) {
        if (cadastros[i].nota >= 7) {
            cout << cadastros[i].numero << " - " << cadastros[i].nome << " - " << cadastros[i].nota << endl;
        }
    }
    cout << "Reprovados: " << endl;
    for (int i = 3; i < MAX; i++) {
        if (cadastros[i].nota < 7) {
            cout << cadastros[i].numero << " - " << cadastros[i].nome << " - " << cadastros[i].nota << endl;
        }
    }

    return 0;
}