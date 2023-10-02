#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

list<string> alunos;

int main() {
    int x, quant = 0;
    string nome;

    do {
        cout << "1 - Adicionar aluno" << endl
             << "2 - Mostrar lista" << endl
             << "3 - Remover aluno" << endl
             << "4 - Zerar a lista" << endl
             << "5 - Mostrar total de alunos" << endl
             << "9 - Sair" << endl;
        cin >> x;
        switch (x) {
        case 1:
            cout << "Digite o nome: ";
            cin.ignore();
            getline(cin, nome);
            alunos.push_back(nome);
            quant++;
            break;

        case 2:
            alunos.sort();
            for (auto el : alunos) {
                cout << el << endl;
            }
            break;

        case 3:
            cout << "Digite o nome para excluir: ";
            cin.ignore();
            getline(cin, nome);
            if (find(alunos.begin(), alunos.end(), nome) != alunos.end()) {
                alunos.erase(find(alunos.begin(), alunos.end(), nome));
                quant--;
            } else
                cout << "Nao Achou" << endl;

            break;
        case 4:
            alunos.clear();
            cout << "Lista zerada" << endl;
            break;

        case 5:
            cout << "Total de alunos: " << quant << endl;
            break;

        default:
            break;
        }
    } while (x != 9);

    return 0;
}