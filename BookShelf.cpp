#include "BookShelf.h"

BookShelf::BookShelf() {
  // empty bookshelf
  numBooks = 0;
  books = NULL;
}

BookShelf::BookShelf(int numBooksParam) {
  numBooks = numBooksParam;
  books = new Book[numBooks];
}

BookShelf::BookShelf(const BookShelf &otherShelf) {
  // we don't want any shared memory with otherShelf
  // make a copy of its books!!
  numBooks = otherShelf.numBooks;
  if (numBooks > 0) {
    books = new Book[numBooks];
    for (int i = 0; i < numBooks; i++) {
      books[i] =
          otherShelf
              .books[i]; // memberwise copy assignment, not copy constructor!!
    }
  } else {
    books = NULL;
  }
}

BookShelf::~BookShelf() {
  if (books != NULL) {
    // free memory
    delete[] books;
    books = NULL;
    numBooks = 0;
  }
}

void BookShelf::display() {
  cout << "*****"
       << "Book Shelf Books"
       << "*****" << endl;
  for (int i = 0; i < numBooks; i++) {
    books[i].display();
    cout << endl;
  }
  cout << "*************************************" << endl;
}