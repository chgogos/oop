#include <iostream>
using namespace std;

void incrementByValue(int x) { x++; }

void incrementByReference(int& x) { x++; }

int main() {
  int num = 10;

  cout << "Αρχική τιμή: " << num << endl;

  incrementByValue(num);
  cout << "Μετά το incrementByValue: " << num << endl;

  incrementByReference(num);
  cout << "Μετά το incrementByReference: " << num << endl;

  return 0;
}
