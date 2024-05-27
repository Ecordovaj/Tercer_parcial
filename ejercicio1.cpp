#include <iostream>

int main() {
    int unidad, subtotal, precio;

    std::cout << "Anote el número de unidades:\n";
    std::cin >> unidad;

    std::cout << "Anote el precio de las unidades:\n";
    std::cin >> precio;

    subtotal = unidad * precio;

    std::cout << "El precio total es de:\n" << subtotal;

    return 0;
}