#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Produto {
    string nomeProduto;
    int quantidadeProduto;
};

vector<Produto> listaDeProdutos;

// Incluir Produto

void incluirProduto() {
    Produto produto;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, produto.nomeProduto);
    cout << "Digite a quantidade de produtos: ";
    cin >> produto.quantidadeProduto;
    listaDeProdutos.push_back(produto);
}

// Listar Produtos

void listarProduto() {
    for (Produto p : listaDeProdutos) {
        cout << "Produto: " << p.nomeProduto;
        cout << "   Quantidade: " << p.quantidadeProduto << endl;
    }
}

// Excluir Produtos

void excluirProduto() {
    string nome;
    cout << "Digite o nome do produto para excluir: ";
    cin.ignore();
    getline(cin, nome);
    for (int i = 0; i < listaDeProdutos.size(); i++) {
        if (listaDeProdutos[i].nomeProduto == nome) {
            listaDeProdutos.erase(listaDeProdutos.begin() + i);
            cout << "Produto excluido\n";
            return;
        }
    }
    cout << "Produto nao encontrado\n";
}

// Ordenar Produtos

bool comparaProdutos(const Produto &a, const Produto &b) {
    return a.nomeProduto < b.nomeProduto;
}
void ordenarProduto() {
    sort(listaDeProdutos.begin(), listaDeProdutos.end(), comparaProdutos);
}

// Pesquisar Produtos

void pesquisarProduto() {
    string nome;
    cout << "Digite o nome do produto para pesquisar: ";
    cin.ignore();
    getline(cin, nome);
    for (Produto p : listaDeProdutos) {
        if (p.nomeProduto.find(nome) != string::npos) {
            cout << "Produto: " << p.nomeProduto;
            cout << "   Quantidade: " << p.quantidadeProduto << endl;
            return;
        }
    }
    cout << "Produto nao encontrado" << endl;
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
