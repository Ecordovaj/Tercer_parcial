#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

int main() {
    int i, j, m;
    string barco[8];

    barco[0] = "           ____      ____      ____   ";
    barco[1] = "          |    |    |    |    |    |  ";
    barco[2] = "          |    |    |    |    |    |  ";
    barco[3] = "  ________|____|____|____|____|____|_______ ";
    barco[4] = "  \\                                       / ";
    barco[5] = "   \\      []  []    []  []    []  []     /  ";
    barco[6] = "    \\___________________________________/   ";

    for (i = 0; i < 8; i++) {
        system("cls");
        for (j = 0; j <= i; j++) {
            cout << endl;
        }
        for (j = 0; j < 8; j++) {
            cout << barco[j] << endl;
            Sleep(500);
        }
    }

    for (i = 0; i < 20; i++) {
        system("cls");
        for (j = 0; j < 8; j++) {
            for (m = 0; m < i; m++) {
                cout << "  ";
            }
            cout << barco[j] << endl;
        }
        usleep(50000);
    }

    return 0;
}
