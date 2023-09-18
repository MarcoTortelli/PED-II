#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

/*

2. Algumas empresas não gostam de deixar o preço nos produtos que estão na loja e para isso, criam um código que representa o preço. Um desses códigos é o conhecido PERNAMBUCO, no qual cada letra corresponde a um número e não há o separador de milhar e decimal:
P = 1, E = 2, R = 3, N = 4, A = 5, M = 6, B = 7, U = 8, C = 9, O = 0
Por exemplo:
R$ 387,25 = RUBEA
PMANCO = R$ 1654,90
Faça um programa que implementa o mapeamento (dicionário) com array e faça outro programa com map (STL C++) com as opções:

Ler o valor e escrever o código no padrão PERNAMBUCO
Ler o código no padrão PERNAMBUCO e escrever o valor
*Como o mapeamento é sempre com o par: chave => valor, são necessários 2 mapeamentos: um para valor => código e outro para código => valor
Dica: leia ambos no formato string e percorra cada caractere da string.

*/

map<char, char> codigoValor = {
    {'P', '1'}, {'E', '2'}, {'R', '3'}, {'N', '4'}, {'A', '5'}, {'M', '6'}, {'B', '7'}, {'U', '8'}, {'C', '9'}, {'O', '0'}};

map<char, char> valorCodigo = {
    {'1', 'P'}, {'2', 'E'}, {'3', 'R'}, {'4', 'N'}, {'5', 'A'}, {'6', 'M'}, {'7', 'B'}, {'8', 'U'}, {'9', 'C'}, {'0', 'O'}};

int main() {
    int x;
    string valor, codigo;
    do {
        cout << "1 - Ler o valor e escrever o codigo no padrao PERNAMBUCO " << endl
             << "2 - Ler o codigo no padrao PERNAMBUCO e escrever o valor" << endl;
        cin >> x;
        switch (x) {
        case 1:
            cout << "Digite o valor: " << endl;
            cin.ignore();
            getline(cin, valor);
            codigo = "";
            for (char c : valor) {
                if (isdigit(c)) {
                    codigo += valorCodigo[c];
                }
            }
            cout << "Codigo: " << codigo << endl;

            break;

        case 2:
            cout << "Digite o codigo: " << endl;
            cin.ignore();
            getline(cin, codigo);
            transform(codigo.begin(), codigo.end(), codigo.begin(), ::toupper);
            valor = "";
            for (char c : codigo) {
                if (codigoValor.find(c) != codigoValor.end()) {
                    valor += codigoValor[c];
                }
            }
            cout << "Valor: " << valor << endl;

            break;
        }
    } while (x != 0);

    return 0;
}
