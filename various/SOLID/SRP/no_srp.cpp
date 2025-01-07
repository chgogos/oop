#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Notes {
  vector<string> entries;

 public:
  void add(const string &entry) {
    static int count = 1;
    entries.push_back(to_string(count++) + " - " + entry);
  }

  void print() {
    for (auto &e : entries) {
      cout << e << endl;
    }
  }

  // δεν υπάρχει λόγος να έχει την υπευθυνότητα αποθήκευσης η κλάση Notes
  // (παραβίαση του Single Responsibility Principle)
  void save(const string &filename) {
    ofstream ofs(filename);
    for (auto &s : entries) {
      ofs << s << endl;
    }
    cout << filename << " saved" << endl;
  }
};

int main() {
  Notes my_notes;
  my_notes.add("Nothing special");
  my_notes.add("Still nothing special");
  my_notes.add("Still Still nothing special");
  my_notes.print();
  my_notes.save("my_notes.txt");
}

/*
1 - Nothing special
2 - Still nothing special
3 - Still Still nothing special
my_notes.txt saved
*/