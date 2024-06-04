#include <iostream>

using namespace std;

int main() {
    float fracc = 0;

    for (int i = 2; i <= 50; i++) {
        float temp = 1.0 / i;
        fracc += temp;
        cout << "La suma de 1 / " << i << " +" << endl;
    }

    cout << "La fracción acumulada es: " << fracc << endl;

    return 0;
}
