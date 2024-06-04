#include <iostream>
#include <string>

using namespace std;

float F1(float s) {
    float q = s * 0.08;
    float ims = s - q;
    cout << "IMSS: te queda " << ims << endl;
    return ims;
}

float F2(float s) {
    float w = s * 0.13;
    float ahorros = s - w;
    cout << "Fondo de Ahorros: te queda " << ahorros << endl;
    return ahorros;
}

float F3(float s) {
    float e = s * 0.10;
    float val = s - e;
    cout << "Vales: te queda " << val << endl;
    return val;
}

float F4(float s) {
    float p = ((s * 0.08) * 0.13) + 0.10;
    cout << "Salario neto: tu salario neto es " << p << endl;
    return p;
}

float C1(float s) {
    float al = ((s * 0.08) * 0.13) + 0.10;
    al = al + 0.10;
    cout << "Categoria A: +10% " << al << endl;
    return al;
}

float C2(float s) {
    float bl = ((s * 0.08) * 0.13) + 0.10;
    bl = bl + 0.15;
    cout << "Categoria B: +15% " << bl << endl;
    return bl;
}

float C3(float s) {
    float cl = ((s * 0.08) * 0.13) + 0.10;
    cl = cl + 0.18;
    cout << "Categoria C: +18% " << cl << endl;
    return cl;
}

int main() {
    string n, respuesta;
    float s, p, al, bl, cl;

    do {
        cout << "Dame tu nombre: ";
        cin >> n;
        cout << "Dame tu salario: ";
        cin >> s;

        cout << "PORCIENTOS" << endl;
        float ims = F1(s);
        float ahorros = F2(s);
        float val = F3(s);
        float salario_neto = F4(s);

        cout << "Categorias" << endl;
        float cat_a = C1(s);
        float cat_b = C2(s);
        float cat_c = C3(s);

        cout << "¿Quieres hacer otra cuenta? (opciones: si, no): ";
        cin >> respuesta;
    } while (respuesta == "si");

    return 0;
}
