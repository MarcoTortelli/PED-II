#include <iostream>
#include <queue>
using namespace std;

/*

3. Faça um programa que controle a fila de atendimento de um pronto-socorro usando vector ou queue.
O pronto-socorro tem 3 filas: 1 – emergência, 2 – urgência e 3 – normal.
Faça um programa com um menu com as opções:

Entrar na fila: ler a fila (1 – emergência, 2 – urgência e 3 – normal) e o nome do paciente e colocar na respectiva fila
Retirar da fila: retirar o primeiro da fila 1, se tiver; senão retirar da fila 2, se tiver; senão retirar da fila 3, se tiver; senão escrever uma mensagem que a fila está vazia
Sair

*/

queue<int> emergencia;
queue<int> urgencia;
queue<int> normal;

int senhaEmergencia = 1;
int senhaUrgencia = 300;
int senhaNormal = 500;
int x;
void entrarNaFila() {
    int tipo;
    cout << "1 - Emergencia 2 - Urgencia 3 - Normal" << endl;
    cin >> tipo;
    switch (tipo) {
    case 1:
        emergencia.push(senhaEmergencia++);
        break;
    case 2:
        urgencia.push(senhaUrgencia++);
        break;
    case 3:
        normal.push(senhaNormal++);
        break;
    }
}
void retirarDaFila() {
    if (!emergencia.empty()) {
        cout << "Atendendo senha " << emergencia.front() << " da fila de emergencia\n";
        emergencia.pop();
    } else if (!urgencia.empty()) {
        cout << "Atendendo senha " << urgencia.front() << " da fila de urgencia\n";
        urgencia.pop();
    } else if (!normal.empty()) {
        cout << "Atendendo senha " << normal.front() << " da fila normal\n";
        normal.pop();
    } else {
        cout << "Todas as filas estao vazias\n";
    }
}

int main() {

    do {
        cout << "1 - Entrar na fila" << endl;
        cout << "2 - Retirar da fila" << endl;
        cout << "3 - sair" << endl;

        cin >> x;
        
        switch (x) {
        case 1:
            entrarNaFila();
            break;
        case 2:
            retirarDaFila();
            break;
        }
    } while (x != 3);
}