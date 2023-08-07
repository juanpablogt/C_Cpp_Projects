#include <iostream>
using namespace std;
void callMenuQueue();

struct QUEUE {
    char name[15];
    struct QUEUE* prev;
};

struct QUEUE* CheckOutCounter = NULL;

void showQueue() {
    cout << endl << "Customers on CheckOutCounter: " << endl;
    struct QUEUE* aux = CheckOutCounter;

    for (int i = 1; aux; i++) {
        cout << "Position : " << i << ": " << aux->name << endl;
        aux = aux->prev;
    }
}

void addElementQueue() {
    struct QUEUE* newClient = new QUEUE;
    cout << "Type the name of the new customer in the queue: ";
    cin >> newClient->name;
    newClient->prev = NULL;

    if (CheckOutCounter == NULL)
        CheckOutCounter = newClient;
    else {
        struct QUEUE* aux = CheckOutCounter;
        while (aux->prev != NULL)
            aux = aux->prev;
        aux->prev = newClient;
    }
}

void removeElementQueue() {
    if (CheckOutCounter) {
        cout << "Customer named: " << CheckOutCounter->name << " was served." << endl;

        struct QUEUE* aux = CheckOutCounter;
        CheckOutCounter = CheckOutCounter->prev;
        delete aux;
    } else {
        cout << "No customers in the CheckOutCounter." << endl;
    }

    callMenuQueue();
}

// Forward declaration of callMenuQueue function
void callMenuQueue();

void callMenuQueue() {
    int option;

    do {
        cout << endl << endl << "Manager of CheckOutCounter:" << endl;
        cout << "1 - show customers." << endl;
        cout << "2 - add customer." << endl;
        cout << "3 - remove customer." << endl;
        cout << "4 - exit." << endl;
        cout << "Type the option: ";
        cin >> option;

        switch (option) {
        case 1:
            showQueue();
            break;
        case 2:
            addElementQueue();
            break;
        case 3:
            removeElementQueue();
            break;
        case 4:
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    } while (option != 4);
}

int main() {
    callMenuQueue();

    // Free memory (optional if you want to release the allocated memory)
    while (CheckOutCounter != NULL) {
        struct QUEUE* temp = CheckOutCounter;
        CheckOutCounter = CheckOutCounter->prev;
        delete temp;
    }

    return 0;
}
