#ifndef CXX_BOOK_BORROWING_SYSTEM_LIBRARY_H
#define CXX_BOOK_BORROWING_SYSTEM_LIBRARY_H
#include <iostream>
#include <map>

using namespace std;

    extern map <int, string> libraryBooks;
    extern map <int, string> borrowedBooks;
    extern map <int, string>::iterator it;

    void bookList();
    void library();
    bool borrowBook();
    bool returnBook();

#endif //CXX_BOOK_BORROWING_SYSTEM_LIBRARY_H
