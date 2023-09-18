#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*

Precisamos de um programa que gerencie uma lista de compras que armazene o nome do produto e a quantidade. O programa deve ter um menu com as seguintes opções:

1 - Incluir produto na lista: ler o nome do produto e a quantidade
2 - Listar todos os produtos em ordem alfabética
3 - Excluir produto da lista: ler o nome do produto a excluir
4 - Pesquisar produto: ler um nome ou parte do nome e mostrar se está ou não na lista. Se estiver, mostrar a quantidade.
9 - Sair

2. Implementar o programa usando vector e struct.

*/

struct listaDeCompras {
    string nomeProduto;
    int quantidadeProduto;
};

vector<listaDeCompras> l;
listaDeCompras lista;
int x;

void incluirProduto() {
}

void listarProdutos() {
}

void excluirProdutos() {
}

void pesquisarProdutos() {
}

int main() {

    do {
        switch (x) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;

        default:
            break;
        }
    } while (x != 9);
}