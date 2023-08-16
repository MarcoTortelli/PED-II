#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

3. Faça um programa que manipule um vetor com o template vector do C++ com um menu para as seguvoides operações:


1 - ler um numero e inserir no fim
2 - ler um numero e inserir no início
3 - ler um numero e a posição onde deve ser inserido
4 - ler um numero e informar se está ou não no vetor
5 - apagar o último elemento
6 - ler a posição e apagar o elemento da posição lida
7 - ordenar vetor - crescente
8 - ordenar vetor - decrescente
9 - mostrar o vetor
10 - mostrar o primeiro elemento
11 - mostrar o último elemento

*/

vector<int> v;
int x, num, aux;

void inserirElementoFim() {
    cout << "Digite um numero para inserir: ";
    cin >> num;
    v.insert(v.end(), num);
}
void inserirElementoComeco() {
    cout << "Digite um numero para inserir: ";
    cin >> num;
    v.insert(v.begin(), num);
}
void inserirElementoPosicao() {
    cout << "Digite o elemento e a posicao para inserir: ";
    cin >> x >> num;
    v.insert(v.begin() + x, num);
}
void pesquisarElemento() {
    cout << "Digite um elemento para pesquisar: ";
    cin >> num;
    if (find(v.begin(), v.end(), x) != v.end()) {
        cout << "Achou\n";
    } else {
        cout << "Nao achou\n";
    }
}
void apagarElementoUltimo() {
    v.erase(v.end() - 1);
}
void apagarElementoPosicao() {
    cout << "Digite a posicao para apagar: ";
    cin >> x;
    v.erase(v.begin() + x);
}
void ordenarVectorCrescente() {
    sort(v.begin(), v.end());
}
void ordenarVectorDecrescente() {
    sort(v.begin(), v.end(), greater<int>());
}
void mostrarVector() {
    for (int i = 0; i < v.size(); i++) {
        cout << " " << v[i];
    }
    cout << endl;
}
void mostrarElementoPrimeiro() {
    if (v.size() > 0)
        cout << v.front();
}
void mostrarElementoUltimo() {
    if (v.size() > 0)
        cout << v.back();
}

int main() {

    do {
        cout << "1 - ler um numero e inserir no fim\n"
             << "2 - ler um numero e inserir no inicio\n"
             << "3 - ler um numero e a posicao onde deve ser inserido\n"
             << "4 - ler um numero e informar se esta ou nao no vetor\n"
             << "5 - apagar o ultimo elemento\n"
             << "6 - ler a posicao e apagar o elemento da posicao lida\n"
             << "7 - ordenar vetor - crescente\n"
             << "8 - ordenar vetor - decrescente\n"
             << "9 - mostrar o vetor\n"
             << "10 - mostrar o primeiro elemento\n"
             << "11 - mostrar o ultimo elemento\n"
             << "0 - sair\n";
        cin >> aux;
        switch (aux) {
        case 1:
            inserirElementoFim();
            break;
        case 2:
            inserirElementoFim();
            break;
        case 3:
            inserirElementoPosicao();
            break;
        case 4:
            pesquisarElemento();
            break;
        case 5:
            apagarElementoUltimo();
            break;
        case 6:
            apagarElementoPosicao();
            break;
        case 7:
            ordenarVectorCrescente();
            break;
        case 8:
            ordenarVectorDecrescente();
            break;
        case 9:
            mostrarVector();
            break;
        case 10:
            mostrarElementoPrimeiro();
            break;
        case 11:
            mostrarElementoUltimo();
            break;
        default:
            break;
        }
    } while (aux != 0);

    return 0;
}
