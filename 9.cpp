#include <iostream>

int main() {
    int n[10], cont = 0, acum = 0, mayor, menor, rep;

    do {
        std::cout << "Ingresa los numeros\n";
        for (int i = 0; i < 10; i++) {
            std::cin >> n[i];
            acum += n[i];
            cont = i + 1;
        }

        mayor = n[0];
        menor = n[0];

        for (int i = 1; i < 10; i++) {
            if (n[i] > mayor) {
                mayor = n[i];
            }
            if (n[i] < menor) {
                menor = n[i];
            }
        }

        std::cout << "la suma es: " << acum << "\n";
        std::cout << "el mayor es: " << mayor << "\n";
        std::cout << "el menor es: " << menor << "\n";

        std::cout << "Desea continuar?\n";
        std::cout << "0=no\n";
        std::cin >> rep;
        acum = 0;
    } while (rep != 0);

    std::cout << "Fin\n";

    return 0;
}
