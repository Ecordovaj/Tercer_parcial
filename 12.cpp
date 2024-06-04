#include <iostream>
#include <vector>

int main() {
    int n;
    int acum = 0, cont = 0;
    std::vector<int> numeros;

    do {
        std::cin >> n;
        std::cout << "Su numero fue: " << n << std::endl;
        cont += n;
        numeros.push_back(n);
    } while (n != 0);

    std::cout << "Finalizado\n";
    std::cout << "Suma: " << cont << std::endl;
    std::cout << "Numeros:" << std::endl;
    for (int j = 0; j < numeros.size(); j++) {
        std::cout << numeros[j] << std::endl;
    }

    return 0;
}
