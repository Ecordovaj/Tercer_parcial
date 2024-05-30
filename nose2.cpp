#include <iostream>

using namespace std;

int main() {
    int opc;
    int b, h, tri, bm, tra, rec;
    
    cout << "CALCULO DE AREAS" << endl;
    cout << "======================================" << endl;
    cout << "1.- Calcular el area de un triangulo" << endl;
    cout << "2.- Calcular el area de un trapecio" << endl;
    cout << "3.- Calcular el area de un rectangulo" << endl;
    cin >> opc;

    switch(opc) {
        case 1:
            cout << "Ingresa la base del triangulo" << endl;
            cin >> b;
            cout << "Ingresa la altura del triangulo" << endl;
            cin >> h;
            tri = b * h / 2;
            cout << "El area es de: " << tri << endl;
            break;
            
        case 2:
            cout << "Ingresa la base menor del trapecio" << endl;
            cin >> b;
            cout << "Ingresa la base mayor del trapecio" << endl;
            cin >> bm;
            cout << "Ingresa la altura del trapecio" << endl;
            cin >> h;
            tra = ((b + bm) * h) / 2;
            cout << "El area es de: " << tra << endl;
            break;

        case 3:
            cout << "Ingresa la base del rectangulo" << endl;
            cin >> b;
            cout << "Ingresa la altura del rectangulo" << endl;
            cin >> h;
            rec = b * h;
            cout << "El area es de: " << rec << endl;
            break;

        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}
