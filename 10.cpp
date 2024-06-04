#include <iostream>

int main() {
    int n, sum = 0, mayor, menor;

    std::cout << "Ingresa los numeros:\n";
    std::cin >> n;
    mayor = menor = n;
    sum += n;

    int cont = 1;

    do {
        std::cin >> n;
        sum += n;

        if (n < menor) {
            menor = n;
        }

        if (n > mayor) {
            mayor = n;
        }

        cont++;
    } while (cont < 10);

    std::cout << "Suma: " << sum << "\n";
    std::cout << "Mayor: " << mayor << "\n";
    std::cout << "Menor: " << menor << "\n";

    return 0;
}
