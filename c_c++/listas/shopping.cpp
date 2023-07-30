#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Global vector to store the shopping list
vector<string> shoppingList;

// Function to display the shopping list
void showList() {
    if (shoppingList.empty()) {
        cout << "The shopping list is empty." << endl;
    } else {
        cout << "Shopping List:" << endl;
        for (size_t i = 0; i < shoppingList.size(); ++i) {
            cout << i + 1 << ". " << shoppingList[i] << endl;
        }
    }
}

// Function to add an article to the shopping list
void addElementList() {
    string article;
    cout << "Enter the article to add: ";
    cin.ignore(); // Ignore any remaining newline character in the input buffer
    getline(cin, article);
    shoppingList.push_back(article);
    cout << "Article added to the shopping list." << endl;
}

// Function to remove an article from the shopping list
void RemoveElementList() {
    if (shoppingList.empty()) {
        cout << "The shopping list is already empty. Nothing to remove." << endl;
    } else {
        cout << "Enter the index of the article to remove: ";
        int index;
        cin >> index;
        if (index >= 1 && index <= static_cast<int>(shoppingList.size())) {
            shoppingList.erase(shoppingList.begin() + index - 1);
            cout << "Article removed from the shopping list." << endl;
        } else {
            cout << "Invalid index. Please try again." << endl;
        }
    }
}

// Function to create a default shopping list
void CreateList() {
    shoppingList = {"Apples", "Bananas", "Milk", "Bread"};
    cout << "Default shopping list created." << endl;
}

// Function to call the menu and manage the shopping list
void callMenuList() {
    int option;

    while (true) {
        cout << endl << endl << "Manager of Shopping List:" << endl;
        cout << "1 - Show shopping list." << endl;
        cout << "2 - Add article." << endl;
        cout << "3 - Remove article." << endl;
        cout << "4 - Create default shopping list." << endl;
        cout << "5 - Exit." << endl;
        cin >> option;

        switch (option) {
            case 1:
                showList();
                break;
            case 2:
                addElementList();
                break;
            case 3:
                RemoveElementList();
                break;
            case 4:
                CreateList();
                break;
            case 5:
                return; // Exit the function (and program) when 5 is selected
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    }
}

int main() {
    callMenuList();
    return 0;
}