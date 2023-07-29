#include <iostream>
using namespace std;

// Prototipo de la función potAlg
int potAlg(int base, int exp);

void staticMA() {
    int ma[9][3];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            ma[i][j] = potAlg(i + 1, j + 1);
            cout << ma[i][j] << "\t";
        }
        cout << endl;
    }
}

int potAlg(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int main() {
    staticMA();
    return 0;
}


