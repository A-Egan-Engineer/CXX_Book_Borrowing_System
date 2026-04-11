#ifndef CXX_BOOK_BORROWING_SYSTEM_LIBRARY_H
#define CXX_BOOK_BORROWING_SYSTEM_LIBRARY_H
#include <iostream>
#include <map>

using namespace std;

// Header file to initialise library variables and methods.
class Library {

    map <int, string> libraryBooks;
    map <int, string> borrowedBooks;
    map <int, string>::iterator it;

    public:

    void bookList();
    void library();
    bool borrowBook();
    bool listUserBooks();
    bool returnBook();
};
#endif //CXX_BOOK_BORROWING_SYSTEM_LIBRARY_H
