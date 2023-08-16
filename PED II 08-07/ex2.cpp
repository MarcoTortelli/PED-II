#include <iostream>
#include <iomanip>
using namespace std;

/*

2. Fazer o mesmo programa acima, formatando só com duas casas decimais e fazendo o arredondamento correto dos centavos em cada venda e no total.

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
        cout << "\nPreco da compra: " << fixed << setprecision(2) << precoCompra;
        precoTotal += precoCompra;
    }
    cout << "Preco total: " << precoTotal;

    return 0;
}