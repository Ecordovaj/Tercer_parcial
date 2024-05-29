#include <iostream>

int main() {
    int tabla[4][3];
    int i, j;

    std::cout << "Por favor ingrese los valores de la tabla de dimensiones 4x3:\n";
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            std::cout << "Ingrese el valor para la fila " << i+1 << " y la columna " << j+1 << ": ";
            std::cin >> tabla[i][j];
        }
    }

    int suma_columna[3] = {0};
    int mayor_suma = 0;
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 4; i++) {
            suma_columna[j] += tabla[i][j];
        }
        if (suma_columna[j] > mayor_suma) {
            mayor_suma = suma_columna[j];
        }
    }

    std::cout << "La mayor suma de las columnas es: " << mayor_suma << "\n";

    return 0;
}
