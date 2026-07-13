#include <iostream>
using namespace std;

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> numeros[i];
    }
    int maior = numeros[0];
    int menor = numeros[0];
    
    for(int i= 1; i < 10; i++) {
        if (numeros[i]>maior){
        maior = numeros[i];   
        }
        if (numeros[i]<menor){
        menor = numeros [i];    
        }
    }
    
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}