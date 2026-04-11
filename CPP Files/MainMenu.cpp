#include "../Headers/MainMenu.h"

void mainMenu() {

    int choice;

    cout << endl;
    cout << "Welcome to the Library Main Menu" << endl;
    cout << endl;
    cout << "Please enter your choice: " << endl;
    cout << endl;
    cout << "1. List User Books" << endl;
    cout << "2. Return Book to Library" << endl;
    cout << "3. List Books Available in Library" << endl;
    cout << "4. Borrow Book From Library" << endl;
    cout << "5. Exit" << endl;
    cout << endl;

    cin >> choice;

    switch (choice) {
        case 1:
            cout << endl;
            listUserBooks();
            enterToMainMenu();
            cout << endl;
            return mainMenu();
            case 2:
            cout << endl;
            returnBook();
            cout << endl;
            return mainMenu();
            case 3:
            cout << endl;
            library();
            enterToMainMenu();
            cout << endl;
            return mainMenu();
            case 4:
            cout << endl;
            borrowBook();
            cout << endl;
            return mainMenu();
            case 5:
            cout << endl;
            cout << "Program Has Exited" << endl;
            cout << endl;
            return;
        default:
            cout << endl;
            cout << "Please enter a valid choice." << endl;
            cout << endl;
            break;
    }
}

void enterToMainMenu() {
    cout << endl;
    cout << "Press enter key to return to main menu...";
    cin.ignore();
    cin.get();
}