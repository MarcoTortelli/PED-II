#include <iostream>
#include <iomanip>

using namespace std;

/*

3. Fazer o mesmo programa do exercício 2, solicitando o valor pago em dinheiro ao final. Escrever o valor do troco, complementando com a informação de quantas notas/moedas devem ser dadas de troco, de modo que se dê a menor quantidade de notas e moedas possíveis, lembrando que só existem notas de 100, 50, 20, 10, 5, 2 e moedas de 1,00 0,50 0,25 0,10 0,05 e 0,01

*/

int main() {
    float peso, preco, precoTotal = 0, precoCompra;

    while (true) {
        cout << "\nDigite o peso da Carne (0 - Finalizar): ";
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