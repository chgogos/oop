#include <iostream>
using namespace std;

class small_class {
 public:
  small_class();
  small_class(int);

 private:
  int data;
};

small_class::small_class() {
  cout << "small_class default constructor called " << endl;
}

small_class::small_class(int d) {
  data = d;
  cout << "small_class parameter constructor called " << endl;
}

class large_class {
 public:
  large_class();
  large_class(int);

 private:
  small_class sc;
};

large_class::large_class() {
  cout << "large_class default constructor called " << endl;
}

// κλήση του constructor με παραμέτρους για το αντικείμενο μέλος δεδομένων
// στο σώμα του κατασκευαστή
large_class::large_class(int d) {
  sc = small_class(d);
  cout << "large_class parameter constructor called " << endl;
}

int main() { large_class obj(1); }

/*
small_class default constructor called
small_class parameter constructor called
large_class parameter constructor called
*/
