#include <iostream>

using namespace std;

void Operacion_suma(float n1, float n2);
void Operacion_resta(float n1, float n2);
void Operacion_division(float n1, float n2);
void Operacion_multiplicacion(float n1, float n2);

void Operacion_suma(float n1, float n2) {
    float suma = n1 + n2;
    cout << "La suma de los 2 números es " << suma << endl;
}

void Operacion_resta(float n1, float n2) {
    float resta = n1 - n2;
    cout << "La resta de los 2 números es " << resta << endl;
}

void Operacion_division(float n1, float n2) {
    if (n2 == 0) {
        cout << "No es posible dividir" << endl;
    } else {
        float d = n1 / n2;
        cout << "La división de los 2 números es " << d << endl;
    }
}

void Operacion_multiplicacion(float n1, float n2) {
    float multi = n1 * n2;
    cout << "La multiplicación de los 2 números es " << multi << endl;
}

int main() {
    float salario, n1, n2;
    int opcion;
    string respuesta;

    cout << "Ingresa tu salario: ";
    cin >> salario;

    do {
        cout << "¿Qué operación quieres realizar?" << endl;
        cout << "1) Suma" << endl;
        cout << "2) Resta" << endl;
        cout << "3) División" << endl;
        cout << "4) Multiplicación" << endl;
        cout << "Elige una opción: ";
        cin >> opcion;

        cout << "Ingrese los 2 números: ";
        cin >> n1 >> n2;

        switch (opcion) {
            case 1:
                Operacion_suma(n1, n2);
                break;
            case 2:
                Operacion_resta(n1, n2);
                break;
            case 3:
                Operacion_division(n1, n2);
                break;
            case 4:
                Operacion_multiplicacion(n1, n2);
                break;
            default:
                cout << "Opción no válida" << endl;
        }

        cout << "¿Quiere realizar otra operación?" << endl;
        cout << "1) SI" << endl;
        cout << "2) NO" << endl;
        cout << "Respuesta: ";
        cin >> respuesta;
    } while (respuesta == "1");

    return 0;
}
