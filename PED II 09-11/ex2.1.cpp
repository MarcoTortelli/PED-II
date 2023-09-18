#include <algorithm>
#include <iostream>

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

string num[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
string letra[] = {"P", "E", "R", "N", "A", "M", "B", "U", "C", "O"};
int main() {
    int x;
    string valor, codigo;
    do {
        cout << "1 - Ler o valor e escrever o codigo no padrao PERNAMBUCO " << endl
             << "Ler o codigo no padrao PERNAMBUCO e escrever o valor" << endl;
        cin >> x;

        switch (x) {
        case 1:
            cout << "Digite o valor: " << endl;
            cin.ignore();
            getline(cin, valor);
            for (int i = 0; i < valor.length(); i++) {
                for (int j = 0; j < valor.length(); j++) {
                    if (valor[i] == num[j][0]) {
                        cout << letra[j];
                        break;
                    }
                }
            }
            break;
        case 2:
            cout << "Digite o codigo: " << endl;
            cin.ignore();
            getline(cin, codigo);
            transform(codigo.begin(), codigo.end(), codigo.begin(), ::toupper);
            for (int i = 0; i < codigo.length(); i++) {
                for (int j = 0; j < codigo.length(); j++) {
                    if (codigo[i] == letra[j][0]) {
                        cout << num[j];
                        break;
                    }
                }
            }
            break;
        }
    } while (x != 0);

    return 0;
}