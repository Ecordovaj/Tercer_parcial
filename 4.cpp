#include <iostream>

int main() {
    char vocal;

    std::cin >> vocal;

    if (vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u') {
        std::cout << vocal << " es una vocal";
    } else {
        std::cout << vocal << " no es una vocal";
    }

    return 0;
}
