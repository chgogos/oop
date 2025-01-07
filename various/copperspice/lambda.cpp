#include <iostream>

using namespace std;

int main() {
  int x = 42;
  auto a_lambda = [x]() { cout << "The value is " << x << endl; };

  x = 7;
  a_lambda();
}

// The value is 42