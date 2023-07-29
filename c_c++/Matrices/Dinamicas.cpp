#include <iostream>
using namespace std;

int potAlg(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

void dinamicMA() {
    int rows;

    cout << "Set the number of rows: ";
    cin >> rows;

    int **ma = new int*[rows];
    int *columns = new int[rows];

    for (int i = 0; i < rows; i++) {
        cout << "Set the number of columns for row " << i+1 << ": ";
        cin >> columns[i];
        ma[i] = new int[columns[i]];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns[i]; j++) {
            ma[i][j] = potAlg(i + 1, j + 1);
            cout << ma[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] ma[i];
    }

    delete[] columns;
    delete[] ma;
}

int main() {
    dinamicMA();
    return 0;
}
