#include <iostream>

using namespace std;

int main() {
    int MAX_NUMEROS = 20;
    int numeros[MAX_NUMEROS];
    
    cout << "Introduce numeros enteros (0 para finalizar):" << endl;
    
    int num;
    int contador = 0;
    for (int i = 0; i < MAX_NUMEROS; ++i) {
        cin >> num;
        if (num == 0) {
            break;
        }
        numeros[contador] = num;
        contador++;
        if (contador == MAX_NUMEROS) {
            cout << "Se ha alcanzado el maximo de numeros permitidos." << endl;
            break;
        }
    }
    
    cout << "Numeros introducidos en orden inverso:" << endl;
    for (int i = contador - 1; i >= 0; --i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    return 0;
}