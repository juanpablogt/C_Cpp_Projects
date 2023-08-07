#include <iostream>
using namespace std;

struct QUEUE {
    char name[15];
    struct QUEUE* prev;
};

struct QUEUE* CheckOutCounter = NULL;

void showStack() {
    cout << "Showing products in the queue:" << endl;
    struct QUEUE* temp = CheckOutCounter;
    while (temp != NULL) {
        cout << temp->name << endl;
        temp = temp->prev;
    }
}

void addElementStack() {
    struct QUEUE* newProduct = new QUEUE;
    cout << "Enter the name of the product: ";
    cin.ignore(); // Ignore any remaining newline character in the input buffer
    cin.getline(newProduct->name, 15);
    newProduct->prev = CheckOutCounter;
    CheckOutCounter = newProduct;
    cout << "Product added successfully!" << endl;
}

void removeElementStack() {
    if (CheckOutCounter == NULL) {
        cout << "Queue is empty. Cannot remove any product." << endl;
    } else {
        struct QUEUE* temp = CheckOutCounter;
        CheckOutCounter = CheckOutCounter->prev;
        cout << "Removed product: " << temp->name << endl;
        delete temp;
    }
}

void callMenuStack() {
    int option;

    while (true) {
        cout << endl << endl << "Manager of stock:" << endl;
        cout << "1 - show products." << endl;
        cout << "2 - add products." << endl;
        cout << "3 - remove products." << endl;
        cout << "4 - exit." << endl;
        cout << "Type the option: ";
        cin >> option;

        switch (option) {
        case 1:
            showStack();
            break;
        case 2:
            addElementStack();
            break;
        case 3:
            removeElementStack();
            break;
        case 4:
            return; // Exit the function, which will return to the main function and end the program.
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    }
}

int main() {
    callMenuStack();
    return 0;
}