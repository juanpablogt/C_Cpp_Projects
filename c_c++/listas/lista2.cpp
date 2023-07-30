#include <iostream>
#include <cstring>

using namespace std;

void callMenuList();

struct LIST {
    char product[15];
    int account;
    struct LIST* next;
};

struct LIST* shoppinglist = NULL;

void showList() {
    struct LIST* item = shoppinglist;
    cout << endl << endl << "Shopping List:" << endl;
    int i = 1;
    while (item != NULL) {
        cout << endl << endl << "Article " << i << " in shopping list:";
        cout << endl << item->product << " x" << item->account;
        item = item->next;
        i++;
    }
}

void insertElementList(char product[15], int account, int position) {
    struct LIST* article = new LIST;
    strcpy_s(article->product, product);
    article->account = account;
    article->next = NULL;

    if (position == 1) {
        article->next = shoppinglist;
        shoppinglist = article;
    } else {
        struct LIST* item = shoppinglist;
        for (int i = 1; item && i < position - 1; i++) {
            item = item->next;
        }
        if (item) {
            article->next = item->next;
            item->next = article;
        } else {
            cout << "Invalid position. Article not inserted." << endl;
            delete article;
        }
    }
}

void addElementList() {
    char product[15];
    int account;
    int position;

    showList();

    cout << endl << "Other number to the end of the list: ";
    cout << endl << "Type the product you want to buy: ";
    cin >> product;
    cout << "Type the account: ";
    cin >> account;
    cout << "Type the position of the new product: ";
    cin >> position;

    insertElementList(product, account, position);

    callMenuList();
}

void createList() {
    insertElementList("gel", 2, 1);
    insertElementList("orange", 20, 2);
    insertElementList("chocolate", 50, 3);

    cout << endl << "Default articles added to shopping list." << endl;

    callMenuList();
}

void 

void removeElementList() {
    showList();

    if (shoppinglist == NULL) {
        cout << endl << "The shopping list is already empty. Nothing to remove." << endl;
    } else {
        cout << endl << "Enter the position of the article to remove: ";
        int position;
        cin >> position;

        if (position >= 1) {
            struct LIST* item = shoppinglist;
            struct LIST* previous = NULL;
            for (int i = 1; item && i < position; i++) {
                previous = item;
                item = item->next;
            }
            if (item) {
                if (previous) {
                    previous->next = item->next;
                } else {
                    shoppinglist = item->next;
                }
                delete item;
                cout << endl << "Article removed from the shopping list." << endl;
            } else {
                cout << endl << "Invalid position. Please try again." << endl;
            }
        } else {
            cout << endl << "Invalid position. Please try again." << endl;
        }
    }

    callMenuList();
}

void callMenuList() {
    int option;

    while (true) {
        cout << endl << endl << "Manager of Shopping List:" << endl;
        cout << "1. Show the shopping list" << endl;
        cout << "2. Add an article to the shopping list" << endl;
        cout << "3. Remove an article from the shopping list" << endl;
        cout << "4. Create a default shopping list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
        case 1:
            showList();
            break;
        case 2:
            addElementList();
            break;
        case 3:
            removeElementList();
            break;
        case 4:
            createList();
            break;
        case 5:
            cout << endl << "Exiting..." << endl;
            return;
        default:
            cout << endl << "Invalid option. Please try again." << endl;
        }
    }
}

int main() {
    callMenuList();
    return 0;
}