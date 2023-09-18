#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

2. Faça um programa utilizando vector e struct que leia um número não conhecido de informações de produtos de uma venda: código, descrição, quantidade e preço unitário. Se for informado o código 0 a leitura deve ser encerrada. Escreva os produtos da venda em ordem alfabética, com o código, quantidade, preço unitário e subtotal (quantidade x preço unitário) e ao final, escreva o total da venda.

*/

struct Produto {
    int codigo;
    string descricao;
    int quantidade;
    float precoUnitario;
};

bool comparaProdutos(Produto &a, Produto &b) {
    return a.descricao > b.descricao;
}

vector<Produto> produtos;
float total = 0;
int main() {
    while (true) {
        Produto p;
        cout << "Digite  o codigo do produto: ";
        cin >> p.codigo;
        if (p.codigo == 0) {
            break;
        }
        cin.ignore();
        cout << "Digite a descricao do produto: ";
        getline(cin, p.descricao);

        cout << "Digite a quantidade do produto: ";
        cin >> p.quantidade;

        cout << "Digite o preco unitario do produto: ";
        cin >> p.precoUnitario;

        produtos.push_back(p);

        total += p.precoUnitario * p.quantidade;
        sort(produtos.begin(), produtos.end(), comparaProdutos);
    }
    /*
       for (int i = 0; i < produtos.size(); i++) {
           float subtotal = produtos[i].quantidade * produtos[i].precoUnitario;
           cout << "Codigo: " << produtos[i].codigo << ", Descricao: " << produtos[i].descricao << ", Quantidade: " << produtos[i].quantidade << ", Preco Unitario: " << produtos[i].precoUnitario << ", Subtotal: " << subtotal << endl;
       }
    */
    for (Produto p : produtos) {
        float subtotal = p.quantidade * p.precoUnitario;
        cout << "Codigo: " << p.codigo << ", Descricao: " << p.descricao << ", Quantidade: " << p.quantidade << ", Preco Unitario: " << p.precoUnitario << ", Subtotal: " << subtotal << "\n";
    }

    cout << "Total: " << total;
}