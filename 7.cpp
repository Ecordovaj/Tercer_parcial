#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a > b && b > c && c < a) {
        std::cout << a << " " << b << " " << c;
    } else if (b > a && b > c && c < b) {
        std::cout << b << " " << a << " " << c;
    } else if (c > a && c > b && b < c) {
        std::cout << c << " " << a << " " << b;
    }

    return 0;
}
