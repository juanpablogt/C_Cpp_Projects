#include <ctime>   
#include <iostream>
using namespace std;

int main() {
unsigned t0, t1;

    t0 = clock();


// PIEZA DE CÓDIGO QUE VAYAMOS A MEDIR


    t1 = clock();

    double time = (double(t1 - t0) / CLOCKS_PER_SEC);


    cout << endl << endl << "Execution Time byInsertion: " << time << endl;

    return 0;
}