#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    const int TAM = 15;
    vector<double> numeros(TAM);

    for (int i = 0; i < TAM; ++i) {
        cin >> numeros[i];
    }

    int indiceMin = distance(numeros.begin(), min_element(numeros.begin(), numeros.end()));
    int indiceMax = distance(numeros.begin(), max_element(numeros.begin(), numeros.end()));

    cout << "Menor valor no indice: " << indiceMin << "\n";
    cout << "Maior valor no indice: " << indiceMax << "\n";

    return 0;
}
