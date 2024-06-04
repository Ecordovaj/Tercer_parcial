#include <iostream>

using namespace std;

void mrestas(int n1, int n2) {
    int restar = n1 - n2;
    cout << "El resultado de la resta es " << restar << endl;
}

void msumas(int n1, int n2) {
    int suma = n1 + n2;
    cout << "El resultado de la suma es " << suma << endl;
}

void mdivision(int n1, int n2) {
    if (n2 != 0) {
        int division = n1 / n2;
        cout << "El resultado de tu división es " << division << endl;
    } else {
        cout << "No es posible dividir entre cero." << endl;
    }
}

void mmultiplicacion(int n1, int n2) {
    int multiplicacion = n1 * n2;
    cout << "El resultado de tu multiplicación es " << multiplicacion << endl;
}

int main() {
    int n1, n2;

    cout << "Dame tus números: ";
    cin >> n1 >> n2;

    msumas(n1, n2);
    mrestas(n1, n2);
    mmultiplicacion(n1, n2);
    mdivision(n1, n2);

    return 0;
}
