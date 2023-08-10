#include <iostream>
#include <cstdlib>
using namespace std;

struct STOCK {
    int serialnumber;
    struct STOCK* next;
};

struct STOCK* cheese = NULL;

void callMenuStack();
void showStack();
void addElementStack();
void removeElementStack();

int main() {
    callMenuStack();
    return 0;
}

void callMenuStack() {
    int option;
    do {
        cout << endl << endl << "Manager of stock:" << endl;
        cout << "1 - show products." << endl;
        cout << "2 - add products." << endl;
        cout << "3 - remove products." << endl;
        cout << "4 - exit." << endl;
        cout << "Type the option: ";
        cin >> option;
    } while (option < 0 || option > 4);

    switch (option) {
        case 1: showStack();
        case 2: addElementStack(); 
        case 3: removeElementStack();
        case 4: break;
    }
}

void showStack() {
    cout << endl << "Report of products in stock" << endl;
    cout << endl << "CHEESE: ";
    struct STOCK* aux = cheese;
    while (aux) {
        cout << endl << "Serial number: " << aux->serialnumber;
        aux = aux->next;
    }
    callMenuStack();
}

void addElementStack() {
    int account;
    cout << "How much units of cheese do you want to add?: ";
    cin >> account;
    for (int i = 0; i < account; i++) {
        struct STOCK* unity = new STOCK;
        unity->serialnumber = rand() % 1000;
        if (cheese == NULL) {
            cheese = unity;
            unity->next = NULL;
        } else {
            unity->next = cheese;
            cheese = unity;
        }
    }
    callMenuStack();
}

void removeElementStack() {
    int account;
    cout << "How much units of cheese do you want to remove?: ";
    cin >> account;
    for (int i = 0; i < account; i++) {
        if (cheese == NULL) {
            cout << endl << "Stock of cheese is empty" << endl;
        } else {
            struct STOCK* aux = cheese;
            cheese = cheese->next;
            delete aux;
        }
    }
    callMenuStack();
    
}
