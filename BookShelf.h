#ifndef BOOKSHELF_H
#define BOOKSHELF_H

// BookShelf will have a private member variable for a dynamically allocated array of Books and a private member variable for the size (number of Books) of the BookShelf
// PA5 is similar... SongLibrary that has a songs dynamically allocated array of Songs

#include <iostream>
#include "Book.h"

using namespace std;

class BookShelf {
  private:
    int numBooks;  // size of books array
    Book * books; // dyn alloc array of Books
  public:
    BookShelf();
    BookShelf(int); // alloc an array of a certain number of default Books
    BookShelf(const BookShelf&); // copy constructor
    ~BookShelf();

    void display();
};

#endif