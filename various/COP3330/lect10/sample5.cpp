#include <iostream>

using namespace std;

int main() {
  int* MyIntPointer;

  for (int i = 0; i < 2000000; i++) {
    MyIntPointer = new int[500000];
    // delete [] MyIntPointer;
  }

  cout << "Done.\n";
  return 0;
}
