#include<iostream>
using namespace std;

void byInsertion() {

    //int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };

    int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

    int size = sizeof(v) / sizeof(*v);

    int aux;


    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";


    for (int i = 1; i < size; i++) {

        aux = v[i];

        int j;

        for (j = i - 1; j >= 0 && v[j] > aux; j--)

            v[j + 1] = v[j];

        v[j + 1] = aux;

    }


    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";

}

int main() {

    byInsertion();

    return 0;

}