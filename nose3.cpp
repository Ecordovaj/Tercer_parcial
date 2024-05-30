#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cout << "Ingresa los 3 digitos uno por uno" << endl;
	cin >> a >> b >> c;

	if ((a == 1 || a == 2 || a == 3) && (b == 1 || b == 2 || b == 3) && (c == 1 || c == 2 || c == 3)) {
		cout << "Acceso Permitido" << endl;
	}

	return 0;
}
