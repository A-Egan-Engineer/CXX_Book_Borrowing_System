#ifndef CXX_BOOK_BORROWING_SYSTEM_MAINMENU_H
#define CXX_BOOK_BORROWING_SYSTEM_MAINMENU_H
#include "../Headers/Library.h"
#include <iostream>

using namespace std;

// Header file to initialise main menu dependencies and methods.
class MainMenu {
    Library& lib;

    public:
    void mainMenu();
    MainMenu(Library& lib) : lib(lib) {};
    static void renterToMainMenu();
};



#endif // CXX_BOOK_BORROWING_SYSTEM_MAINMENU_H
