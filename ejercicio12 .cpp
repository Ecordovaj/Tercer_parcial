#include <iostream>
using namespace std;

int main() {

    int f, numero, c, matriz, j, i;

    cout<< "digite el numero de filas";
    cin >> f;

    cout << "digite el numero de columnas";
    cin >> c;

    int matriz [f, c];

    for (i=1; i<=c; i++);{
        for (j=1; j=c; j++); 
        {
            cout << "digite el dato para la fila: " << i << "columna: " <<j ;
            cin >> numero;

            int matriz [i, j]<- numero;

        }
    }

    for (i=1; i<=f; i++);{
        for (j=1; j<=c; j++);{
            cout << "los datos que hay en la matriz son: " << matriz [i, j];
        }
    }

return 0;

}