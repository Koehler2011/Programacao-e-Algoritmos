#include <iostream>
#include <limits>
using namespace;

int main() {
    
int num1, num2;

    cout << "Digite dois numeros inteiros: ";
    cin >> num1 >> num2;

    int soma = num1 + num2;
    int subtracao1 = num1 - num2;
     int subtracao2 = num2 - num1;
    int multiplicacao = num1 * num2;
    double divisao1 = num1 % num2;
    double divisao2 = num2 % num1;

    return 0;
}
