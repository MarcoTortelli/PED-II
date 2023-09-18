#include <iostream>

using namespace std;

/*

Precisamos de um programa que gerencie uma lista de compras que armazene o nome do produto e a quantidade. O programa deve ter um menu com as seguintes opções:

1 - Incluir produto na lista: ler o nome do produto e a quantidade
2 - Listar todos os produtos em ordem alfabética
3 - Excluir produto da lista: ler o nome do produto a excluir
4 - Pesquisar produto: ler um nome ou parte do nome e mostrar se está ou não na lista. Se estiver, mostrar a quantidade.
9 - Sair

1. Implementar o programa usando array e struct.

*/

struct Produto {
    string nomeProduto;
    int quantidadeProduto;
};

#define MAX_PRODUTOS 4

Produto listaDeProdutos[MAX_PRODUTOS];
int numProdutos = 0;
string nome;

void incluirProduto() {
    if (numProdutos == MAX_PRODUTOS) {
        cout << "A lista esta cheia\n";
        return;
    }
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, listaDeProdutos[numProdutos].nomeProduto);
    cout << "Digite a quantidade de produtos: ";
    cin >> listaDeProdutos[numProdutos].quantidadeProduto;
    numProdutos++;
}
void listarProduto() {
    for (int i = 0; i < numProdutos; i++) {
        cout << "Produto: " << listaDeProdutos[i].nomeProduto;
        cout << "   Quantidade: " << listaDeProdutos[i].quantidadeProduto << endl;
    }
}
void excluirProduto() {
    bool cont = false;
    cout << "Digite o nome do produto para excluir: ";
    cin.ignore();
    getline(cin, nome);
    for (int i = 0; i < numProdutos; i++) {
        if (listaDeProdutos[i].nomeProduto == nome) {
            for (int j = 0; j < numProdutos - 1; j++) {
                listaDeProdutos[j].nomeProduto = listaDeProdutos[j + 1].nomeProduto;
                listaDeProdutos[j].quantidadeProduto = listaDeProdutos[j + 1].quantidadeProduto;
            }
            cont = true;
            cout << "Produto excluido\n";
            numProdutos--;
        }
    }

    if (!cont) {
        cout << "Produto nao encontrado\n";
    }
}
void pesquisarProduto() {
    cout << "Digite o nome do produto para pesquisar: ";
    cin.ignore();
    getline(cin, nome);
    bool cont = false;
    for (int i = 0; i < numProdutos; i++) {
        if (listaDeProdutos[i].nomeProduto.find(nome) != string ::npos) {
            cont = true;
            cout << "Produto: " << listaDeProdutos[i].nomeProduto;
            cout << "   Quantidade: " << listaDeProdutos[i].quantidadeProduto << endl;
        }
    }

    if (!cont) {
        cout << "Produto nao encontrado" << endl;
    }
}

int main() {
    int x;

    do {
        cin >> x;
        switch (x) {
        case 1:
            incluirProduto();
            break;

        case 2:
            listarProduto();
            break;

        case 3:
            excluirProduto();
            break;

        case 4:
            pesquisarProduto();
            break;
        }
    } while (x != 9);
}