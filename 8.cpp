#include <iostream>

int main() {
    int n1, n2, n3, n4, n5;

    std::cout << "Ingresa los 5 numeros\n";
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        std::cout << "El menor es " << n1 << "\n";
    } else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        std::cout << "El menor es " << n2 << "\n";
    } else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        std::cout << "El menor es " << n3 << "\n";
    } else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) {
        std::cout << "El menor es " << n4 << "\n";
    } else {
        std::cout << "El menor es " << n5 << "\n";
    }

    return 0;
}
