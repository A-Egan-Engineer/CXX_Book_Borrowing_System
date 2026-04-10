#include "../Headers/Library.h"
#include <iostream>
#include <map>

using namespace std;

    map <int, string> libraryBooks;
    map <int, string> borrowedBooks;
    map <int, string>::iterator it;

    void bookList() {
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

    void library() {

        for (it = libraryBooks.begin(); it != libraryBooks.end(); ++it) {
            cout << it->first << ": " << it->second << endl;
        }

        cout << endl;
        cout << "Press enter key to return to main menu...";
        cin.ignore();
        cin.get();
    }

    bool borrowBook() {

        int choice;
        cout << "Enter book number to borrow..." << endl;
        cin >> choice;

        it = libraryBooks.find(choice);
        if (it != libraryBooks.end()) {
            string title = it->second;
            borrowedBooks.insert(*it);
            libraryBooks.erase(it);
            cout << "Borrowed book: " << title << endl;
            return true;
        }
        else {
            cout << endl;
            cout << "No book found..." << endl;
            return false;
        }
    }

    bool returnBook() {
        int choice;
        cout << "Enter book number to return..." << endl;
        cin >> choice;

        it = libraryBooks.find(choice);
        if (it != libraryBooks.end()) {
            string title = it->second;
            libraryBooks.insert(*it);
            borrowedBooks.erase(it);
            cout << "Returned book: " << title << endl;
            return true;
        }
        else {
            cout << endl;
            cout << "No book found..." << endl;
            return false;
        }
    }