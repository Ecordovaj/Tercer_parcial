#include <iostream>

using namespace std;

void encabezado() {
    cout << "Jose Emiliano Cordova Lima" << endl;
    cout << "Fecha de elaboracion 03/junio/24" << endl;
}

void sum(int n1, int n2) {
    cout << "La suma de " << n1 << " más " << n2 << " es " << n1 + n2 << endl;
}

int resta(int n1, int n2) {
    cout << "La resta de " << n1 << " menos " << n2 << " es igual a " << n1 - n2 << endl;
    return n1 - n2;
}

int main() {
    int n1, n2;

    encabezado();

    cout << "Ingresa tu primer número: ";
    cin >> n1;
    cout << "************************" << endl;
    cout << "Ingresa tu segundo número: ";
    cin >> n2;

    sum(n1, n2);
    resta(n1, n2);

    return 0;
}
