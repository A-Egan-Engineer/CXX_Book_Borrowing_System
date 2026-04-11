#include <iostream>
#include "Headers/Library.h"
#include "Headers/MainMenu.h"

using namespace std;

int main() {

  Library lib;

  lib.bookList();
  MainMenu mainMenu(lib);
  mainMenu.mainMenu();

  return 0;
}
