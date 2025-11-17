#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
 public:
  string title;
};

class Library {
  vector<Book*> books;

 public:
  Library() {}

  void add_book(Book* b) { books.push_back(b); }

  Library(const Library& other) {
    for (auto b : other.books) {
      Book* newBook = new Book();
      newBook->title = b->title;
      books.push_back(newBook);
    }
  }

  void print() const {
    for (auto b : books) cout << b->title << "\n";
  }
};

int main() {
  Book* b1 = new Book();
  b1->title = "C++ Basics";
  Book* b2 = new Book();
  b2->title = "Algorithms";

  Library lib1;
  lib1.add_book(b1);
  lib1.add_book(b2);
  Library lib2(lib1); // copy constructor

  cout << "lib1:\n";
  lib1.print();
  cout << "lib2:\n";
  lib2.print();

  b1->title = "Advanced C++";

  cout << "lib1:\n";
  lib1.print();
  cout << "lib2:\n";
  lib2.print();

  delete b1;
  delete b2;
  return 0;
}
