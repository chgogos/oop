#include <iostream>
using namespace std;

void f(int& x) { x = x + 10; }

int main() {
  int a = 5;
  cout << "Before: " << a << endl;
  f(a);
  cout << "After: " << a << endl;
  return 0;
}