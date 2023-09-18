#include <iostream>
#include <queue>

using namespace std;

/*

b) Fazer um programa que controle 2 tipos de filas de caixa: a fila normal e a fila preferencial.
Quando um cliente entra na fila, deve escolher se ele é da fila normal ou preferencial. Quando um caixa está disponível ele chama sempre o primeiro elemento da fila preferencial, se tiver. Se não tiver nenhum cliente na fila preferencial, o primeiro da fila normal é chamado. Utilize um número sequencial (contador) como se fosse um número de senha: a fila preferencial inicia com a senha 001 e a fila normal inicia com a senha 501.
O programa deve ter um menu com as opções:
1 - entrar na fila preferencial
2 - entrar na fila normal
3 - chamar o próximo da fila

*/
int main() {
    queue<int> preferencial;
    queue<int> normal;
    int senhaPreferencial = 1;
    int senhaNormal = 501;
    int opcao;

    do {
        cout << "1 - Entrar na fila preferencial\n";
        cout << "2 - Entrar na fila normal\n";
        cout << "3 - Chamar o proximo da fila\n";
        cout << "4 - Sair\n";
        cin >> opcao;

        switch (opcao) {
        case 1:
            preferencial.push(senhaPreferencial++);
            break;
        case 2:
            normal.push(senhaNormal++);
            break;
        case 3:
            if (!preferencial.empty()) {
                cout << "Chamando senha preferencial: " << preferencial.front() << endl;
                preferencial.pop();
            } else if (!normal.empty()) {
                cout << "Chamando senha normal: " << normal.front() << endl;
                normal.pop();
            } else {
                cout << "Nenhuma senha para chamar\n";
            }
            break;
        default:
            cout << "Opção invalida\n";
        }
    } while (opcao != 4);

    return 0;
}