#include "../Headers/UserBooks.h"
#include "../Headers/Library.h"

bool listUserBooks() {
    if (!borrowedBooks.empty()) {
        cout << "Books borrowed: " << endl;
        for (it = borrowedBooks.begin(); it != borrowedBooks.end(); it++) {
            cout << it->first << ": " << it->second << endl;
        }
        return true;
    }
    else {
        cout << endl;
        cout << "No books borrowed..." << endl;
        return false;
    }
}
