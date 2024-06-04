#include <iostream>

using namespace std;

int main() {
    float pd, pc, pnh, pnm, pg = 0;
    char etn, rep;
    string princesa;
    
    do {
        cout << "Bienvenido a Tienda Mi Estilo" << endl;
        cout << "1. Departamento de Dama" << endl;
        cout << "2. Departamento de Caballero" << endl;
        cout << "3. Departamento de Niño" << endl;
        cout << "4. Departamento de Niña" << endl;
        cout << "Elige una opción: ";
        int op;
        cin >> op;

        switch (op) {
            case 1:
                cout << "Bienvenido al Departamento de Dama" << endl;
                cout << "¿Cuánto cuesta su producto? ";
                cin >> pd;
                pd *= 0.85;
                cout << "Su artículo tiene un 15% de descuento" << endl;
                cout << "El precio final de su producto es: " << pd << endl;
                cout << "¿Su producto es marca Kiwi? ";
                cin >> rep;
                if (rep == 's' || rep == 'S') {
                    pd *= 0.90;
                    cout << "Felicidades, tiene otro 10% de descuento" << endl;
                    cout << "El precio final de su producto es: " << pd << endl;
                }
                cout << "¿Su producto tiene etiqueta color naranja? ";
                cin >> etn;
                if (etn == 's' || etn == 'S') {
                    pd *= 0.75;
                    cout << "Felicidades, tiene un 25% de descuento extra" << endl;
                    cout << "El precio final de su producto es: " << pd << endl;
                }
                break;

            case 2:
                cout << "Bienvenido al Departamento de Caballero" << endl;
                cout << "¿Cuánto cuesta su producto? ";
                cin >> pc;
                pc *= 0.90;
                cout << "Su producto tiene un 10% de descuento" << endl;
                cout << "El precio final de su producto es: " << pc << endl;
                cout << "¿Su producto tiene etiqueta naranja? ";
                cin >> etn;
                if (etn == 's' || etn == 'S') {
                    pc *= 0.75;
                    cout << "Felicidades, tiene un 25% de descuento extra" << endl;
                    cout << "El precio final de su producto es: " << pc << endl;
                }
                break;

            case 3:
                cout << "Bienvenido al Departamento de Niño" << endl;
                cout << "¿Cuánto cuesta su producto? ";
                cin >> pnh;
                pnh *= 0.75;
                cout << "Su producto tiene un 25% de descuento" << endl;
                cout << "El precio final de su producto es: " << pnh << endl;
                cout << "¿Su producto tiene etiqueta naranja? ";
                cin >> etn;
                if (etn == 's' || etn == 'S') {
                    pnh *= 0.75;
                    cout << "Felicidades, tiene un 25% de descuento extra" << endl;
                    cout << "El precio final de su producto es: " << pnh << endl;
                }
                break;

            case 4:
                cout << "Bienvenido al Departamento de Niña" << endl;
                cout << "¿Cuánto cuesta su producto? ";
                cin >> pnm;
                pnm *= 0.95;
                cout << "Su producto tiene un 5% de descuento" << endl;
                cout << "El precio final de su producto es: " << pnm << endl;
                cout << "¿Su producto es marca Princesa? ";
                cin >> princesa;
                if (princesa == "si" || princesa == "Si" || princesa == "SI") {
                    pnm *= 0.90;
                    cout << "Felicidades, tiene un 10% de descuento extra" << endl;
                    cout << "El precio final de su producto es: " << pnm << endl;
                }
                cout << "¿Su producto tiene etiqueta naranja? ";
                cin >> etn;
                if (etn == 's' || etn == 'S') {
                    pnm *= 0.75;
                    cout << "Felicidades, tiene un 25% de descuento extra" << endl;
                    cout << "El precio final de su producto es: " << pnm << endl;
                }
                break;

            default:
                cout << "Opción no válida" << endl;
        }

        cout << "¿Desea terminar su pedido? ";
        cout << "si/no: ";
        cin >> rep;

    } while (rep == 'no' || rep == 'NO' || rep == 'No');

    pg = pd + pc + pnh + pnm;
    cout << "La suma total es: " << pg << endl;
    cout << "Vuelva pronto" << endl;

    return 0;
}
