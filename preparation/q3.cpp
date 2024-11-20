#include <iostream>
#include <string>

using namespace std;

class ebook {
 private:
  string title;
  string authors;
  int file_size;

 public:
  ebook(string title, string authors, int file_size)
      : title(title), authors(authors), file_size(file_size) {}
  string get_title() { return title; }
  string get_authors() { return authors; }
  string get_file_size(string magnitude = "b") {
    if (magnitude == "b")
      return to_string(file_size) + " bytes";
    else if (magnitude == "kb")
      return to_string(file_size / 1024.) + " kilobytes";
    else if (magnitude == "mb")
      return to_string(file_size / 1048576.) + " megabytes";
    else
      throw string("invalid magnitude specifier");
  }
};

int main() {
  ebook a[3] = {
      ebook("The Pragmatic Programmer", "Andrew Hunt and David Thomas",
            1234567),
      ebook("Clean Code", "Robert C. Martin", 12345678),
      ebook("Introduction to the Theory of Computation", "Sipser", 12345678)};
  cout << "Choose bytes/kbytes/mbytes by typing b or kb or mb: ";
  string choice;
  cin >> choice;
  try {
    for (int i = 0; i < 3; i++) {
      cout << a[i].get_title() << " " << a[i].get_authors() << " "
           << a[i].get_file_size(choice) << endl;
    }
  } catch (string ex) {
    cout << "\nException: " << ex << endl;
  }
}
