#include "../Headers/Library.h"
#include <iostream>
#include <map>

using namespace std;

// Creates maps for library, user & iterator
    map <int, string> libraryBooks;
    map <int, string> borrowedBooks;

// List of key-value pairs store in library books map (dynamic).
    void Library::bookList() {
        libraryBooks = {
            {1, "The One Thing - Garry W. Keller and Jay Papasan"},
            {2, "Empire of AI - Karen Hao"},
            {3, "Rich Dad Poor Dad - Robert Kiyosaki and Sharon Lechter"},
            {4, "Dare to Lead - Brene Brown"},
            {5, "Atomic Habits - James Clear"},
            {6, "The Subtle Art of Not Giving a F*ck - Mark Mason"},
            {7, "The 7 Habits of Highly Effective People - Stephen R. Covey"},
            {8, "Deep Work - Cal Newport"},
            {9, "Mindset - Carol S. Dweck"},
            {10, "Think and Grow Rich - Napoleon Hill"},
        };
    }

// For loop that is used to iterate through the books that are stored in the library.
    void Library::library() {

        for (auto it = libraryBooks.begin(); it != libraryBooks.end(); ++it) {
            cout << it->first << ": " << it->second << endl;
        }
    }

// Lists books borrowed by user and erases them from library books
bool Library::listUserBooks() {
        if (!borrowedBooks.empty()) {
            cout << "Books borrowed: " << endl;
            for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
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

// Allows users to borrow books from the library & erases book from library to avoid duplicates
    bool Library::borrowBook() {

        int choice;
        cout << "Enter book number to borrow..." << endl;
        cin >> choice;

        auto it = libraryBooks.find(choice);
        if (it != libraryBooks.end()) {
            int bookId = it->first;
            string bookName = it->second;
            borrowedBooks.insert(*it);
            libraryBooks.erase(it);
            cout << "Borrowed book: " << bookId << ": " << bookName << endl;

            return true;
        }
        else {
            cout << endl;
            cout << "No book found..." << endl;
            return false;
        }
    }

// Completes the reverse of borrowing and returns the borrowed book into the library.
    bool Library::returnBook() {
        int choice;
        cout << "Enter book number to return..." << endl;
        cin >> choice;

        auto it = borrowedBooks.find(choice);
        if (it != borrowedBooks.end()) {
            int bookId = it->first;
            string bookName = it->second;
            libraryBooks.insert(*it);
            borrowedBooks.erase(it);
            cout << "Returned book: " << bookId << ": " << bookName << endl;
            return true;
        }
        else {
            cout << endl;
            cout << "No book found..." << endl;
            return false;
        }
    }