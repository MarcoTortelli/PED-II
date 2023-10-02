#include <algorithm>
#include <iostream>

using namespace std;

/*

Arrays: leitura de quantidade fixa, leitura de quantidade não conhecida de valores, com menu, pesquisa, ordenação, com struct

*/

struct Produto {
    string nomeProduto;
    int quantidadeProduto;
};

#define TAM 4

Produto listaDeProdutos[TAM];
int numProdutos = 0;

string nome;
int quantidade;

// Incluir Produto

void incluirProduto() {
    if (numProdutos == TAM) {
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

void incluirProdutoDiferenciado() {
    for (int i = 0; i < TAM; i++) {
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
}

// Listar Produtos

void listarProduto() {
    for (int i = 0; i < numProdutos; i++) {
        cout << "Produto: " << listaDeProdutos[i].nomeProduto;
        cout << "   Quantidade: " << listaDeProdutos[i].quantidadeProduto << endl;
    }
}

void listarProdutoDiferenciado() {
    for (int i = 0; i < numProdutos; i++) {
        cout << "Codigo: " << i + 1 << ", Produto: " << listaDeProdutos[i].nomeProduto << ", Quantidade: " << listaDeProdutos[i].quantidadeProduto << "\n";
    }
}

// Excluir Produtos

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

// Ordenar Produtos

bool comparaProdutos(Produto &a, Produto &b) {
    return a.nomeProduto < b.nomeProduto;
}
void ordenarProduto() {
    sort(listaDeProdutos, listaDeProdutos + numProdutos, comparaProdutos);
}

// Pesquisar Produtos

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

    return 0;
}