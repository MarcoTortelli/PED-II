#include <iostream>
using namespace std;

struct produto {
    string nome;
    float quant;
};

int main() {
    produto a[20];
    int cont = 0;
    for (int i = 0; i < 20; i++) {
        cout << "Informe o nome do produto: ";
        getline(cin, a[i].nome);
        if (a[i].nome == "")
            break;
        cout << "Informe a quantidade: ";
        cin >> a[i].quant;
        cin.ignore();
        if (a[i].quant == 0)
            break;
        cont++;
    }
    for (int i = 0; i < cont - 1; i++) {
        for (int j = i + 1; j < cont; j++) {
            if (a[i].nome > a[j].nome)
                swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < cont; i++) {
        cout << a[i].nome << " - " << a[i].quant << endl;
    }
}
