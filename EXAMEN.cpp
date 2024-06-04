#include <iostream>
#include <string>

int calculadora() {
    int xd = 1, cant, pre, stotal = 0, total = 0;

    do {
        std::cout << "Ingrese la cantidad de articulos: ";
        std::cin >> cant;
        if (cant < 0) {
            std::cout << "Error, numero negativo\n";
            break;
        }

        std::cout << "Ingresa el precio: ";
        std::cin >> pre;
        if (pre < 0) {
            std::cout << "Error, numero negativo\n";
            break;
        }

        stotal = cant * pre;
        total += stotal;

        if (cant == 0) {
            std::cout << "El total es de: " << total;
            break;
        }
    } while (xd == 1);

    return total;
}

int main() {
    std::string user, group;
    int password;

    std::string root = "Emiliano";
    std::string grupo = "2BMPG";

    for (int i = 0; i < 3; i++) {
        std::cout << "Ingresa tu nombre: ";
        std::cin >> user;

        std::cout << "Ingresa la contraseña: ";
        std::cin >> password;

        std::cout << "Ingresa tu grupo: ";
        std::cin >> group;

        if (user != root) {
            std::cout << "Usuario incorrecto. Intente nuevamente.\n";
        } else if (password != 45) {
            std::cout << "Contraseña incorrecta. Intente nuevamente.\n";
        } else if (group != grupo) {
            std::cout << "Grupo incorrecto. Intente nuevamente.\n";
        } else {
            std::cout << "Bienvenido al sistema\n";
            break;
        }
    }

    if (user != root || password != 45 || group != grupo) {
        std::cout << "Numero de intentos superados\n";
    } else {
        int totalcompra = calculadora();
    }

    return 0;
}
