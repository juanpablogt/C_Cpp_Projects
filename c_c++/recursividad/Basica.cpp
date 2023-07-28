#include <iostream>
using namespace std;

void countdown(int number) {

    cout << endl << number;

    if (number > 0)

        countdown(number - 1);

    else

        cout << endl << "BOOM";

}

int main() {

    countdown(10);

    return 0;

}
