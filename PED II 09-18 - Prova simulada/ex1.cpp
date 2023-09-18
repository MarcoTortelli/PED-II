#include <algorithm>
#include <iostream>

using namespace std;

/*

1. Faça um programa utilizando 2 arrays ou 1 array com struct que leia as informações de até 20 itens de produtos de uma venda: produto e quantidade.
Se for informado o produto com nome vazio ou a quantidade igual a zero a leitura deve ser encerrada.
Escreva os produtos da venda em ordem alfabética, com o código, produto e quantidade.

*/
struct Produto {
    string nomeProduto;
    int quantidadeProduto;
};

#define MAX_PRODUTOS 20

Produto listaDeProdutos[MAX_PRODUTOS];
int numProdutos = 0;

string nome;
int quantidade;

bool comparaProdutos(Produto &a, Produto &b) {
    return a.nomeProduto < b.nomeProduto;
}

int main() {
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        cout << "Digite o nome do produto: ";
        cin.ignore();
        getline(cin, nome);
        if (nome == "") {
            break;
        }
        cout << "Digite a quantidade de produtos: ";
        cin >> quantidade;
        if (quantidade == 0) {
            break;
        }

        cin.ignore();
        listaDeProdutos[numProdutos].nomeProduto = nome;
        listaDeProdutos[numProdutos].quantidadeProduto = quantidade;
        numProdutos++;
    }

    sort(listaDeProdutos, listaDeProdutos + numProdutos, comparaProdutos);

    for (int i = 0; i < numProdutos; i++) {
        cout << "Codigo: " << i + 1 << ", Produto: " << listaDeProdutos[i].nomeProduto << ", Quantidade: " << listaDeProdutos[i].quantidadeProduto << "\n";
    }
}