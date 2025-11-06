#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Book {
 private:
  string title;
  int pages;

 public:
  Book(string t, int p) : title(t), pages(p) {}
  bool operator<(const Book& other) const { return pages < other.pages; }
  bool operator>(const Book& other) const { return pages > other.pages; }
  friend ostream& operator<<(ostream& os, const Book& other) {
    os << other.title << " " << other.pages;
    return os;
  }
};

int main() {
  vector<Book> library = {Book("C++ Basics", 250), Book("Algorithms", 500),
                          Book("Data Structures", 300),
                          Book("Machine Learning", 450),
                          Book("Databases", 350)};

  cout << "Original list:\n";
  for (const auto& book : library) cout << book << endl;

  sort(library.begin(), library.end());
  cout << "\nSorted by pages (ascending):\n";
  for (const auto& book : library) cout << book << endl;

  sort(library.begin(), library.end(), greater<Book>());
  cout << "\nSorted by pages (descending):\n";
  for (const auto& book : library) cout << book << endl;

  return 0;
}
