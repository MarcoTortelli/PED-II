#include <iostream>
#include <set>

using namespace std;

/*

Faça um programa que manipule 2 conjuntos usando set (C++) com as seguintes operações:
1 - Inserir no conjunto 1
2 - Inserir no conjunto 2
3 - Criar e mostrar a Intersecção dos conjuntos
4 - Criar e mostrar a União dos conjuntos
5 - Mostrar os 2 conjuntos
9 - Sair

*/

set<int> c1, c2, interceccao, uniao;

int main() {
    int aux;
    int x;
    do {
        cout << "1 - Inserir no conjunto 1" << endl
             << "2 - Inserir no conjunto 2" << endl
             << "3 - Criar e mostrar a Interseccao dos conjuntos" << endl
             << "4 - Criar e mostrar a Uniao dos conjuntos" << endl
             << "5 - Mostrar os 2 conjuntos" << endl
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
            for (int i : c1)
                if (c2.find(i) != c2.end())
                    interceccao.insert(i);
            cout << "Interseccao: ";
            for (int i : interceccao)
                cout << i << " ";
            cout << endl;
            interceccao.clear();
            break;
        case 4:
            uniao = c1;
            uniao.insert(c2.begin(), c2.end());
            cout << "Uniao: ";
            for (int i : uniao)
                cout << i << " ";
            cout << endl;
            uniao.clear();
            break;
        case 5:
            cout << "Conjunto 1: ";
            for (int i : c1)
                cout << i << " ";
            cout << endl;

            cout << "Conjunto 2: ";
            for (int i : c2)
                cout << i << " ";
            cout << endl;
            break;

        default:
            cout << "Operador invalido" << endl;
            break;
        }

    } while (x != 9);

    return 0;
}