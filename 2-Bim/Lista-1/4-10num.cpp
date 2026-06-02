// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int maior, menor, num, num1;
   cout << "Digite 10 numeros diferentes"<<endl;
    for(int i=1; i<=10; i++){
        cout << "Escreva o "<< i <<"° número! ";
        cin >> num;
    }
    if (num > maior){
        
        maior = num;
        
    }
    if (num1 < menor){
        menor = num1;
    }
    cout << "O maior numero e: "<<maior<<endl;
    cout<<"O menor numero e: "<<menor<<endl;
    return 0;
}
