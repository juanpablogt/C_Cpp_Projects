#include<iostream>
using namespace std;

void byBubbleSort() {

    //int v[] = { 2,7,1,4,3,5,0,8,2,-1,2 };

    int v[] = { 7, 28, 2, 53, 16, 13, 45, 345, 2345, 234, 35235 ,123, 4346,75, 4,7,3,68,2,6,63,2,0,68,436,12,343,54,25, 13, 15, 2, 97, 81, 981 ,618 ,61, 3280, 18, 5, 78, 23, 81, 65, 84, 72, 95 };

    int size = sizeof(v) / sizeof(*v);

    int aux;

    int rounds = 0;

    bool ord = false;


    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";


    while (!ord) {

        ord = true;

        for (int i = 0; i < size - 1 - rounds; i++) {

            if (v[i] > v[i + 1]) {

                aux = v[i + 1];

                v[i + 1] = v[i];

                v[i] = aux;

                ord = false;

            }

        }

        rounds++;

    }


    cout << endl;

    for (int i = 0; i < size; i++) cout << v[i] << " ";

}

int main () {

    byBubbleSort();

    return 0;

}