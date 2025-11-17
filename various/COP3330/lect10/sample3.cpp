#include <stdio.h>
#include <string.h>

#include <iostream>

using namespace std;

int main() {
  char* MyCharPointer = new char;
  char* MyCharArray = new char[20];

  strcpy(MyCharArray, "This is a basic example\n");
  *MyCharPointer = 'a';

  cout << MyCharArray << *MyCharPointer;

  delete MyCharPointer;
  delete[] MyCharArray;

  return 0;
}

/*
This is a basic example
a
*/