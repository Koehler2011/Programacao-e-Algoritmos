#include <iostream>
using namespace std;

int main() {
    int fim, multiplo;

    cout << "Digite o numero de parada final: ";
    cin >> fim;

    cout << "Digite o numero base para os multiplos: ";
    cin >> multiplo;

    cout << "Multiplos de " << multiplo << " de 1 ate " << fim << ":" << endl;

    // O laco comeca em 1 e vai ate o numero final
    for (int i = 1; i <= fim; i++) {
        // Se o resto da divisao de i pelo multiplo for 0, significa que i e multiplo
        if (i % multiplo == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
