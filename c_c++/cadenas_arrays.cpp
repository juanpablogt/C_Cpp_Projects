#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void checkPal(char* string) {
    bool pal = true;
    for (int i = 0; i < strlen(string) / 2 && pal; i++) {
        if (string[i] != string[strlen(string) - i - 1])
            pal = false;
    }
    if (pal)
        cout << endl << string << " is palindrome" << endl;
    else
        cout << endl << string << " is not palindrome" << endl;
}

void strings() {
    char name[] = "Jose Javier";
    cout << name << endl;
    cout << strlen(name) << endl;

    // Convert to lowercase using _strlwr_s
    if (_strlwr_s(name, sizeof(name)) == 0) {
        cout << name << endl;

        // Reversing the string using std::reverse
        _strrev(name);
        cout << name << endl;
    } else {
        cout << "Error converting to lowercase" << endl;
    }

    char string[] = "allivessevilla";
    checkPal(string);
}

int main() {
    strings();
    return 0;
}