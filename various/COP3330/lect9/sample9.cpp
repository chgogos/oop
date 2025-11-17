#include <stdio.h>

#include <iostream>

using namespace std;

int main() {
  int MyInt = 4;
  int& MyIntRef = MyInt;
  int* MyIntPtr;

  MyIntPtr = &MyIntRef;

  cout << *MyIntPtr << "\n";

  return 0;
}

/*
4
*/