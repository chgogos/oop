#include <iostream>

using namespace std;

int main() {
  int* MyIntArray = new int[3];

  MyIntArray[0] = 5;
  MyIntArray[1] = 6;
  MyIntArray[2] = 7;

  for (int i = 0; i < 3; i++) cout << MyIntArray[i] << "\n";

  delete[] MyIntArray;
  return 0;
}

/*
5
6
7
*/