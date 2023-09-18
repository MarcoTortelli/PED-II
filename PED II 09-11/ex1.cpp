#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

/*

1. Implemente um programa que manipule 2 conjuntos com set (C++) e crie mais 2 conjuntos: um que seja a intersecção (somente os elementos que estão em ambos conjuntos) e outro que seja a união dos 2 primeiros conjuntos (todos os elementos dos conjuntos 1 e 2, sem repetição), com as operações:

Inserir um elemento no conjunto 1
Inserir um elemento no conjunto 2
Remover um elemento do conjunto 1
Remover um elemento do conjunto 2
Mostrar os conjuntos 1 e 2
Mostrar a intersecção dos conjuntos 1 e 2
Mostrar a união dos conjuntos 1 e 2


*/

set<int> c1, c2, interseccao, uniao;

int main() {
    int aux;
    int x;
    do {
        cout << "1 - Inserir no conjunto 1" << endl
             << "2 - Inserir no conjunto 2" << endl
             << "3 - Remover no conjunto 1" << endl
             << "4 - Remover no conjunto 2" << endl
             << "5 - Mostrar os conjuntos" << endl
             << "6 - Mostrar a Interseccao dos conjuntos" << endl
             << "7 - Mostrar a Uniao dos conjuntos" << endl
             << "9 - Sair" << endl;

        cin >> x;
        switch (x) {
        case 1:
            cout << "Digite o numero para inserir: ";
            cin >> aux;
            c1.insert(aux);

            break;
        case 2:
            cout << "Digite o numero para inserir: ";
            cin >> aux;
            c1.insert(aux);
            break;
        case 3:
            cout << "Digite o numero para remover: ";
            cin >> aux;
            if (c1.find(aux) != c1.end()) {

                c1.erase(aux);
                cout << "Removido" << endl;
            } else {
                cout << "Nao encontrado" << endl;
            }
            break;
        case 4:
            cout << "Digite o numero para remover: ";
            cin >> aux;
            if (c2.find(aux) != c2.end()) {

                c2.erase(aux);
                cout << "Removido" << endl;
            } else {
                cout << "Nao encontrado" << endl;
            }
            break;

        case 5:
            cout << "Conjunto 1: ";
            for (auto i : c1)
                cout << i << " ";
            cout << endl;

            cout << "Conjunto 2: ";
            for (auto i : c2)
                cout << i << " ";
            cout << endl;
            break;
        case 6:
            set_intersection(c1.begin(), c1.end(), c2.begin(), c2.end(), inserter(interseccao, interseccao.begin()));
            cout << "Interseccao: ";
            for (auto i : interseccao) {
                cout << i << " ";
                cout << endl;
            }
            interseccao.clear();

            break;
        case 7:
            set_union(c1.begin(), c1.end(), c2.begin(), c2.end(), inserter(uniao, uniao.begin()));

            cout << "Uniao: ";
            for (auto i : uniao)
                cout << i << " ";
            cout << endl;
            uniao.clear();
            break;

        default:
            cout << "Operador invalido" << endl;
            break;
        }

    } while (x != 9);

    return 0;
}