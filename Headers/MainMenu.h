#ifndef CXX_BOOK_BORROWING_SYSTEM_MAINMENU_H
#define CXX_BOOK_BORROWING_SYSTEM_MAINMENU_H
#include "../Headers/Library.h"
#include <iostream>

using namespace std;

class MainMenu {
    Library& lib;

    public:
    void mainMenu();
    MainMenu(Library& lib) : lib(lib) {};
    static void enterToMainMenu();
};



#endif // CXX_BOOK_BORROWING_SYSTEM_MAINMENU_H
