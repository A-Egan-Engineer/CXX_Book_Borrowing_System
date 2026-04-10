#include "../Headers/Library.h"
#include <iostream>
#include <map>

void library() {
        map <int, string> book;
        map <int, string>::iterator it;

        book.insert(pair<int, string>(1, "The One Thing - GarryW. Keller and Jay Papasan"));
        book.insert(pair<int, string>(2, "Empire of AI - Karen Hao"));
        book.insert(pair<int, string>(3, "Rich Dad Poor Dad - Robert Kiyosaki and Sharon Lechter"));
        book.insert(pair<int, string>(4, "Dare to Lead - Brene Brown"));
        book.insert(pair<int, string>(5, "Atomic Habits - James Clear"));
        book.insert(pair<int, string>(6, "The Subtle Art of Not Giving a F*ck - Mark Mason"));
        book.insert(pair<int, string>(7, "The 7 Habits of Highly Effective People - Stephen R. Covey"));
        book.insert(pair<int, string>(8, "Deep Work - Cal Newport"));
        book.insert(pair<int, string>(9, "Mindset - Carol S. Dweck"));
        book.insert(pair<int, string>(10, "Thick and Grow Rich - Napoleon Hill"));

        for (it = book.begin(); it != book.end(); ++it) {
            cout << it->first << ": " << it->second << endl;
        }

    cout << endl;
    cout << "Press enter key to return to main menu...";
    cin.ignore();
    cin.get();
    }


