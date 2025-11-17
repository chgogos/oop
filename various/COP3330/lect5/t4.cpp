#include <iostream>

using namespace std;

void foo(const int x) {
  x = 100;  // expression must be a modifiable lvalue
}

void foo1(const int& x) {
  x = 200;  // expression must be a modifiable lvalue
}

int main() {
  int i;
  i = 1;
  foo(i);
  cout << "i value after foo(i) (by value) is " << i << endl;

  foo1(i);
  cout << "i value after foo1(i) (by reference) is " << i << endl;
  return 0;
}
