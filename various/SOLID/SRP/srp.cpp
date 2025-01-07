#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Notes {
 public:
  vector<string> entries;

  void add(const string &entry) {
    static int count = 1;
    entries.push_back(to_string(count++) + " - " + entry);
  }

  void print() {
    for (auto &e : entries) {
      cout << e << endl;
    }
  }
};

// η κλάση Persist αναλαμβάνει την αποθήκευση των αντικειμένων Notes
class Persist {
 public:
  static void save(const Notes &notes, const string &filename) {
    ofstream ofs(filename);
    for (auto &s : notes.entries) {
      ofs << s << endl;
    }
    cout << filename << " saved " << endl;
  }
};

int main() {
  Notes my_notes;
  my_notes.add("Nothing special");
  my_notes.add("Still nothing special");
  my_notes.add("Still Still nothing special");
  my_notes.print();
  Persist::save(my_notes, "my_notes.txt");
}

/*
1 - Nothing special
2 - Still nothing special
3 - Still Still nothing special
my_notes.txt saved
*/