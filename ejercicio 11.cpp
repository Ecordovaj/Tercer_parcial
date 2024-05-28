#include <iostream>
using namespace std;

int main() {

    int paises, n, nombre, i, pos;

    cout << "digite el nuumero de paises"
    cin >> n;

    int paises [n];

    for (i=1; i<n ; i++);{
    
    cout << "digite paises" <<i <<endl;
    cin >> nombre;

    paises [i]<-nombre;
    
    }
    cout << "digite la posicion "
    cin >> pos; 

    cout << "el pais que hay en la posicion " << pos " es" << paises [pos];
}


