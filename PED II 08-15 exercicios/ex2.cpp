#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

2. Faça um programa que leia um número não conhecido de valores e armazene num vector do C++. Ordene e escreva os números em ordem decrescente. Leia um número a pesquisar e escreva se o mesmo está ou não no vector.

*/

vector<int> v;

int main() {
    int x;

    do {
        cout << "Digite o valor: ";
        cin >> x;
        if (x > 0)
            v.push_back(x);

    } while (x > 0);

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << " " << v[i];
    }

    cout << "\nPesquisar: ";
    cin >> x;
    if (find(v.begin(), v.end(), x) != v.end()) {
        cout << "Achou" << endl;
    } else {
        cout << "Nao Achou" << endl;
    }

    return 0;
}