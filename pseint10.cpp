#include <iostream>

using namespace std;

int main() {
    int xd, dat, i, pa = 0, pr = 0, nu = 0, suma = 0;

    cout << "Ingresa cuántos números quieres: ";
    cin >> xd;

    for (i = 1; i <= xd; i++) {
        cout << "Ingresa tu dato: ";
        cin >> dat;

        if (dat % 2 == 0) {
            if (dat == 0) {
                cout << "El número es nulo" << endl;
                nu++;
            } else {
                cout << "El número es par" << endl;
                pa++;
            }
        } else {
            cout << "El número es impar" << endl;
            pr++;
        }

        suma += dat;

    }

    cout << "Los números pares son " << pa << endl;
    cout << "Los números impares son " << pr << endl;
    cout << "Los números nulos son " << nu << endl;
    cout << "La suma de tus datos es " << suma << endl;

    return 0;
}
