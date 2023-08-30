#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*

5. Faça um programa que gerencie 2 listas de convidados (da noiva e do noivo), com as seguinte opções:
1 - Inserir convidado da noiva
2 - Inserir convidado do noivo
3 - Mostrar as duas listas de convidados
4 - Mostrar o número total de convidados e escrever qual é maior
* Utilizar list ou vector para implementar

*/

vector<string> listaNoiva;
vector<string> listaNoivo;
vector<string> listaGeral;
int x;
string convidado;

void inserirNoiva() {
    cin.ignore();
    cout << "Digite o nome do convidado: ";
    getline(cin, convidado);
    listaNoiva.push_back(convidado);
    sort(listaNoiva.begin(), listaNoiva.end());
}
void inserirNoivo() {
    cin.ignore();
    cout << "Digite o nome do convidado: ";
    getline(cin, convidado);
    listaNoivo.push_back(convidado);
    sort(listaNoivo.begin(), listaNoivo.end());
}
void mostrarListas() {
    cout << "Lista da noiva: " << endl;
    for (int i = 0; i < listaNoiva.size(); i++) {

        cout << i + 1 << " - " << listaNoiva[i] << endl;
    }
    cout << "Lista do noivo: " << endl;
    for (int i = 0; i < listaNoivo.size(); i++) {

        cout << i + 1 << " - " << listaNoivo[i] << endl;
    }

    /*
     if (listaNoiva.size() >= listaNoivo.size()) {
     cout << "Lista da noiva - Lista do noivo" << endl;
     for (int i = 0; i < listaNoiva.size(); i++) {
         cout << i + 1 << " - " << listaNoiva[i] << " - " << listaNoivo[i] << endl;
     }
 } else {
     cout << "Lista da noiva - Lista do noivo" << endl;
     for (int i = 0; i < listaNoivo.size(); i++) {
         cout << i + 1 << " - " << listaNoiva[i] << " - " << listaNoivo[i] << endl;
     }
 }

 */
}

void mostrarNumeroTotal() {
    if (listaNoiva.size() > listaNoivo.size()) {
        cout << "A noiva teve mais convidados com: " << listaNoiva.size();
    } else if (listaNoiva.size() < listaNoivo.size()) {
        cout << "O noivo teve mais convidados com: " << listaNoivo.size();
    } else {
        cout << "Tem a mesma quantidade de convidados";
    }
    cout << endl
         << "O total de convidados foi: " << listaNoiva.size() + listaNoivo.size() << endl;
}
void mostrarListaGeral() {
    cout << "Lista geral de convidados: " << endl;
    for (int i = 0; i < listaNoiva.size(); i++) {
        listaGeral.push_back(listaNoiva[i]);
    }
    for (int i = 0; i < listaNoivo.size(); i++) {
        listaGeral.push_back(listaNoivo[i]);
    }
    for (int i = 0; i < listaGeral.size(); i++) {
        sort(listaGeral.begin(), listaGeral.end());

        cout << i + 1 << " - " << listaGeral[i] << endl;
    }
}

int main() {
    do {
        cout << "1- Inserir convidado da noiva" << endl
             << "2 - Inserir convidado do noivo" << endl
             << "3 - Mostrar as duas listas de convidados" << endl
             << "4 - Mostrar o numero total de convidados" << endl
             << "5 - Mostrar a lista geral" << endl;
        cin >> x;
        switch (x) {
        case 1:
            inserirNoiva();
            break;
        case 2:
            inserirNoivo();
            break;
        case 3:
            mostrarListas();
            break;
        case 4:
            mostrarNumeroTotal();
            break;
        case 5:
            mostrarListaGeral();
            break;
        }

    } while (x != 0);

    return 0;
}