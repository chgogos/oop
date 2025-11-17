#include <stdio.h>

#include <iostream>

using namespace std;

int main() {
  char MyArray[3] = {'a', 'b', 'c'};
  char* Ptr;

  Ptr = MyArray;
  Ptr++;

  cout << Ptr[-1] << " " << MyArray[0] << "\n";
  cout << Ptr[0] << " " << MyArray[1] << "\n";

  return 0;
}

/*
a a
b b
*/