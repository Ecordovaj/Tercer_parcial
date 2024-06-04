#include <iostream>

using namespace std;

int main() {
    char op, rep;

    cout << "¿Quieres calcular los días?" << endl;
    cout << "1) No" << endl;
    cout << "2) Sí" << endl;
    cin >> op;

    do {
        if (op == '2') {
            cout << "¿Cuántos días son?" << endl;
            int dias;
            cin >> dias;

            int ANOS = dias / 365;
            int meses = dias / 30;
            int semanas = dias / 7;

            cout << "Los días en años son " << ANOS << " año(s)" << endl;
            cout << "Los días en meses son " << meses << " mes(es)" << endl;
            cout << "Los días en semanas son " << semanas << " semana(s)" << endl;

            cout << "¿Deseas repetir?" << endl;
            cout << "1) Sí" << endl;
            cout << "2) No" << endl;
            cin >> rep;
        } else {
            cout << "¡Hasta luego!" << endl;
            break;
        }
    } while (rep == '1');

    return 0;
}
