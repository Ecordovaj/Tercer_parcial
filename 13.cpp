#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa las veces que se repetira\n";
    std::cin >> n;

    for (int i = 0; i < n; i += 5) {
        std::cout << i;
    }

    return 0;
}
