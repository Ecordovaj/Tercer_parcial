#include <iostream>

int main() {
    int horas, precio;
    float total;

    std::cout << "Ingrese las horas trabajadas\n";
    std::cin >> horas;
    std::cout << "Ingrese el precio cobrado por hora\n";
    std::cin >> precio;

    if (horas >= 40) {
        horas = horas + (horas * 0.5);
        total = horas * precio;
    } else if (horas >= 50) {
        horas = horas + horas;
        total = horas * precio;
    } else {
        total = horas * precio;
    }

    std::cout << "Su salario semanal es de " << total << std::endl;

    return 0;
}
