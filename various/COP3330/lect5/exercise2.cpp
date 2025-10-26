#include <chrono>
#include <iostream>
#include <string>
using namespace std;
using namespace std::chrono;

class Book {
 public:
  string title, author, content;
  int pages;
  Book(string t, string a, string c, int p)
      : title(t), author(a), content(c), pages(p) {}
};

void printBookInfo(Book book) { int dummy = book.pages; }
void printBookInfoRef(Book& book) { int dummy = book.pages; }
void printBookInfoConstRef(const Book& book) { int dummy = book.pages; 
book.pages++;}

int main() {
  string largeContent(10000, 'x');
  Book b("Title", "Author", largeContent, 123);

  auto start1 = high_resolution_clock::now();
  for (int i = 0; i < 1000000; ++i) printBookInfo(b);
  auto end1 = high_resolution_clock::now();
  cout << "Pass by value: "
       << duration_cast<nanoseconds>(end1 - start1).count() << " ms\n";

  auto start2 = high_resolution_clock::now();
  for (int i = 0; i < 1000000; ++i) printBookInfoRef(b);
  auto end2 = high_resolution_clock::now();
  cout << "Pass by reference: "
       << duration_cast<nanoseconds>(end2 - start2).count() << " ms\n";

  auto start3 = high_resolution_clock::now();
  for (int i = 0; i < 1000000; ++i) printBookInfoConstRef(b);
  auto end3 = high_resolution_clock::now();
  cout << "Pass by const reference: "
       << duration_cast<nanoseconds>(end3 - start3).count() << " ms\n";

  return 0;
}
