#include <iostream>
using namespace std;

void hanoi(int n, int source, int dest, int aux) {

    if (n > 0) {


        hanoi(n - 1, source, aux, dest);


        cout << endl << "Disk from postition " << source << " to " << dest;


        hanoi(n - 1, aux, dest, source);

    }

}

int main() {

hanoi(10, 1, 3, 2);

return 0;

}