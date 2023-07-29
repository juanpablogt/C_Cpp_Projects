#include <iostream>
using namespace std;

void showMA3x3(int ma[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << ma[i][j] << "\t";
        }
        cout << endl;
    }
}

void multMA() {
    int a[3][3] = { {3, 1, -2}, {0, 4, 2}, {7, 5, 1} };
    int b[3][3] = { {-1, 0, 8}, {3, 6, 9}, {0, 0, 3} };
    int c[3][3] = { 0 };

    cout << "Matriz A:\n";
    showMA3x3(a);

    cout << "\tx\n";

    cout << "Matriz B:\n";
    showMA3x3(b);

    cout << "\t=\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
        }
    }

    showMA3x3(c);
}

int main() {
    multMA();
    return 0;
}