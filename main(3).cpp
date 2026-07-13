#include <iostream>
using namespace std;

int main() {
    int vetor[15];
    int ValorProcurado;
    int contador = 0;
    for (int i = 0; i < 15; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Qual valor procuras??: ";
    cin>>ValorProcurado;
    
    for (int i = 0; i <15; i++) {
        if (vetor[i] == ValorProcurado) {
            contador++ ;
        }
        cout<< "O valor "<<ValorProcurado<<" aparece " << contador << "vez(es) na contagem"<<endl;
    }
   
    return 0;
}