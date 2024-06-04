#include <iostream>
#include <string>

int main() {
    std::string user;
    int password;

    std::string root = "root";

    for (int i = 0; i < 3; i++) {
        std::cout << "Ingresa tu nombre: ";
        std::cin >> user;

        std::cout << "Ingresa la contraseña: ";
        std::cin >> password;

        if (user != root) {
            std::cout << "Usuario incorrecto. Intente nuevamente.\n";
        } else if (password != 1234) {
            std::cout << "Contraseña incorrecta. Intente nuevamente.\n";
        } else {
            std::cout << "Acceso Permitido\n";
            break;
        }
    }

    return 0;
}
