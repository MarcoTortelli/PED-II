#include <iostream>

using namespace std;

/*

1. O açougue Boi Bagem quer um sistema para realizar a venda de carnes para seus clientes. Faça um programa que fique lendo o peso e o preço por quilo das carnes vendidas e escrevendo o valor de cada uma e o valor acumulado da venda. O programa deve encerrar quando for informado peso igual a 0. Escrever o total a pagar ao final da venda.

*/

int main() {

    float peso, preco, precoTotal = 0, precoCompra;

    while (true) {
        cout << "\n0 - Finalizar venda\nDigite o peso da Carne: ";
        cin >> peso;
        if (peso == 0) {
            break;
        }
        cout << "Digite o preco da carne: ";
        cin >> preco;

        precoCompra = peso * preco;
        cout << "\nPreco da compra: " << precoCompra;
        precoTotal += precoCompra;
    }
    cout << "Preco total: " << precoTotal;

    return 0;
}