#include "../Headers/MainMenu.h"

void mainMenu() {

    int choice;

    cout << "Welcome to the Library Main Menu" << endl;
    cout << "Please enter your choice: " << endl;
    cout << "1. List User Books" << endl;
    cout << "2. Return Book to Library" << endl;
    cout << "3. List Books Available in Library" << endl;
    cout << "4. Borrow Book From Library" << endl;
    cout << "5. Exit" << endl;

    cin >> choice;

    switch (choice) {
        case 1:
            listUserBooks();
            return mainMenu();
            case 2:
            returnBook();
            break;
            case 3:
            listLibrary();
            break;
            case 4:
            borrowBook();
            break;
            case 5:
            return;
        default:
            cout << "Please enter a valid choice." << endl;
            break;
    }
}