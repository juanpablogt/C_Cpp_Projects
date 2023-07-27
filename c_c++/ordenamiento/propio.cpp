#include<iostream>
using namespace std;
#include <ctime>

void byJJ() {


    unsigned t0, t1;

    t0 = clock();


    //int v[] = { 2,7,1,4, 5,8,0};

    int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

    int size = sizeof(v) / sizeof(*v);

    int aux;

    int PosMin;

    int PosMax;

    int PosFinal;

    PosFinal = size - 1;


    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";


    for (int i = 0; i < size / 2; i++) {


        PosMin = i;

        PosMax = i;


        for (int j = i; j <= PosFinal; j++) {

            if (v[j] > v[PosMax]) PosMax = j;

            if (v[j] < v[PosMin]) PosMin = j;

        }


        aux = v[PosMin];

        v[PosMin] = v[i];

        v[i] = aux;


        if (PosMax == i) PosMax = PosMin;


        aux = v[PosFinal];

        v[PosFinal] = v[PosMax];

        v[PosMax] = aux;

        PosFinal--;


        //cout << endl;

        //for (int n = 0; n < size; n++) cout << v[n] << " ";

    }


    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";

    t1 = clock();


    double time = (double(t1 - t0) / CLOCKS_PER_SEC);

    cout << endl << endl << "Execution Time byJJ: " << time << endl;

}

int main() {

    byJJ();

    return 0;

}