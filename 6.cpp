#include <iostream>
#include <string>

int main() {
    int carta;
    std::string tipo;
    
    std::cout << "Ingresa el tipo de la baraja\n";
    std::cin >> tipo;
    std::cout << "Ingresa el numero de la baraja\n";
    std::cin >> carta;

    switch (carta) {
        case 1:
            std::cout << "As\n";
            break;
        case 10:
            std::cout << "Sota\n";
            break;
        case 11:
            std::cout << "Caballo\n";
            break;
        case 12:
            std::cout << "Rey\n";
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            std::cout << "No tiene figura\n";
            break;
        default:
            std::cout << "Este no es un numero de la Baraja Española\n";
    }

    std::cout << tipo;

    return 0;
}
