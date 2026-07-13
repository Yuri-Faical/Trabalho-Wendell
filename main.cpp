#include <iostream>
using namespace std;

int main() {
    float notas[8];
    float soma = 0;

    for (int i = 0; i < 8; i++) {
        cout << "Digite a nota " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    float media = soma / 8;

    cout << "Soma total: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;
}