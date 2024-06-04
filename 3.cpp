#include <iostream>

int main() {
    int opc;
    int b, h, tri, bm, tra, rec;
    
    std::cout << "CALCULO DE AREAS\n";
    std::cout << "======================================\n";
    std::cout << "1.- Calcular el area de un triangulo\n";
    std::cout << "2.- Calcular el area de un trapecio\n";
    std::cout << "3.- Calcular el area de un rectangulo\n";
    std::cin >> opc;

    switch (opc) {
        case 1:
            std::cout << "Ingresa la base del triangulo\n";
            std::cin >> b;
            std::cout << "Ingresa la altura del triangulo\n";
            std::cin >> h;
            tri = b * h / 2;
            std::cout << "El area es de: " << tri << "\n";
            break;
            
        case 2:
            std::cout << "Ingresa la base menor del trapecio\n";
            std::cin >> b;
            std::cout << "Ingresa la base mayor del trapecio\n";
            std::cin >> bm;
            std::cout << "Ingresa la altura del trapecio\n";
            std::cin >> h;
            tra = ((b + bm) * h) / 2;
            std::cout << "El area es de: " << tra << "\n";
            break;

        case 3:
            std::cout << "Ingresa la base del rectangulo\n";
            std::cin >> b;
            std::cout << "Ingresa la altura del rectangulo\n";
            std::cin >> h;
            rec = b * h;
            std::cout << "El area es de: " << rec << "\n";
            break;

        default:
            std::cout << "Opción no válida\n";
    }

    return 0;
}
