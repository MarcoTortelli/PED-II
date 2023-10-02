#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct venda {
    int codigo;
    string desc;
    float quant;
    float preco;
};

bool operator<(venda &a, venda &b) {
    return a.desc < b.desc;
}

int main() {
    vector<venda> vv;
    venda v;
    while (true) {
        cout << "Informe o codigo do produto [0 para finalizar]: ";
        cin >> v.codigo;
        cin.ignore();
        if (v.codigo == 0)
            break;
        cout << "Informe o nome do produto: ";
        getline(cin, v.desc);
        cout << "Informe a quantidade: ";
        cin >> v.quant;
        cout << "Informe o preco: ";
        cin >> v.preco;
        vv.push_back(v);
    }
    sort(vv.begin(), vv.end());
    float total = 0;
    for (int i = 0; i < vv.size(); i++) {
        cout << vv[i].codigo << " - " << vv[i].desc << " - " << vv[i].quant
             << " - " << vv[i].preco << " = " << vv[i].preco * vv[i].quant << endl;
        total = total + vv[i].preco * vv[i].quant;
    }
    cout << "Total da venda: " << total << endl;
}