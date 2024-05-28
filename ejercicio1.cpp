#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; // variable para almacenar el tamaño del arreglo

    // Pedimos el número de posiciones o tamaño
    cout << "Digite el número de posiciones: ";
    cin >> n;

    // Creamos el arreglo con el tamaño ingresado
    string personas[n]; // arreglo de strings para almacenar los nombres

    // Le damos un dato a cada posición con un ciclo for
    for (int i = 0; i < n; i++) {
        // Pedimos los datos
        cout << "Digite un nombre para la posición " << i << ": ";
        string nombre; // variable para almacenar el nombre ingresado
        cin >> nombre;
        personas[i] = nombre; // asignamos el nombre ingresado al arreglo
    }

    // Imprimimos los datos asignados con un ciclo for
    for (int i = 0; i < n; i++) {
        cout << "El dato en la posición " << i << " es: " << personas[i] << endl;
    }

    return 0;
}