#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Ingresa los 3 digitos uno por uno\n";
    std::cin >> a >> b >> c;

    if (a == 1 || a == 2 || a == 3) {
        if (b == 1 || b == 2 || b == 3) {
            if (c == 1 || c == 2 || c == 3) {
                std::cout << "Acceso Permitido\n";
            }
        }
    }

    return 0;
}
