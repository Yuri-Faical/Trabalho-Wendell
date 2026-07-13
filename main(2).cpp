#include <iostream>
using namespace std;

int main() {
    int vetor[6];

    for (int i = 0; i < 6; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Valores na ordem inversa: ";
    for (int i = 5; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}