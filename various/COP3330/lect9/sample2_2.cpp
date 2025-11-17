#include <iostream>

using namespace std;

int* foo(int a) {
  int* MyInt = new int;

  *MyInt = a;

  return MyInt;
}

int main() {
  int *MyIntPtr, *p2;

  MyIntPtr = foo(5);
  p2 = foo(7);

  cout << *MyIntPtr << "\n";

  delete MyIntPtr;
  delete p2;
}
