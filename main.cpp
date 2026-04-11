#include <iostream>
#include "Headers/Library.h"
#include "Headers/MainMenu.h"

using namespace std;

int main() {

// Instantiates Library
  Library lib;

// Creates book list, creates main menu
// with library dependency injection with
// main Library reference and calls main
// menu method.
  lib.bookList();
  MainMenu mainMenu(lib);
  mainMenu.mainMenu();

  return 0;
}
