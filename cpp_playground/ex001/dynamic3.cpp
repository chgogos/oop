#include <iostream>

int main() {
  int *p1 = new int;
  *p1 = 5;
  std::cout << sizeof(p1) << std::endl;

  int *p2 = new int(10);
  std::cout << sizeof(p2) << std::endl;

  int *p3 = new int[100];
  for (int i = 0; i < 100; i++) {
    p3[i] = i;
  }
  std::cout << sizeof(p3) << std::endl;

  int a[100];
  std::cout << sizeof(a) << std::endl;

  delete p1;
  delete p2;
  delete[] p3;
}

/*
8
8
8
400
*/
