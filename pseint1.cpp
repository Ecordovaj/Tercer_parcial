#include <iostream>
#include <string>

using namespace std;

void maquinadecomision(string name, int vendidos) {
    float comision, sueldob, impuestos, sueldon;
    int pago;
    
    if (vendidos < 15) {
        pago = 350;
    } else {
        pago = 350 + 40;
    }
    
    comision = vendidos * 15;
    sueldob = pago + comision;
    
    cout << "Tu sueldo base es de " << sueldob << endl;
    cout << "Pero se le resta el 5% por los impuestos " << endl;
    
    impuestos = sueldob * 0.05;
    cout << "Se te restarán " << impuestos << " a tu sueldo final" << endl;
    
    sueldon = sueldob - impuestos;
    cout << "Tu sueldo neto es de " << sueldon << endl;
}

int main() {
    int vendidos;
    string name;
    
    cout << "Dime tu nombre: ";
    cin >> name;
    cout << "Dime cuántos autos vendiste: ";
    cin >> vendidos;
    cout << "Tu pago inicial es de 350" << endl;
    cout << "Por cada auto vendido recibirás 15 extra" << endl;
    
    maquinadecomision(name, vendidos);
    
    return 0;
}
