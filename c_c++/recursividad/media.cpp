#include <iostream>
using namespace std;

int factorialRecursion(int number) {

    if (number > 1) number = number * factorialRecursion(number - 1);

    return number;

}

int main() {

    int number;

    cout << endl << "Enter a number: ";
    cin >> number;

    cout << endl << "The factorial of " << number << " is " << factorialRecursion(number);

    return 0;

}


