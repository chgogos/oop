#include <iostream>

int main() {
  int x = 42;
  int *p = &x;
  std::cout << p << " " << *p << std::endl;
  *p = 43;
  std::cout << p << " " << *p << std::endl;
  int **pp = &p;
  **pp = 44;
  std::cout << *pp << " " << **pp << std::endl;
  int *a = new int;
  *a = 100;
  std::cout << a << " " << *a << std::endl;
  delete a;
  return 0;
}