#include <iostream>
using namespace std;

class A {
private:
  int x;

public:
  A() : x(0) {}
  void setX(int x) { this->x = x; }
  // constant member function
  void foo() const {
    cout << x << endl;
    // x++;  // ERROR: expression must be a modifiable lvalue
  }
};

// constant function parameter
void foo(const int &x) {
  cout << x << endl;
  // x++; // ERROR: expression must be a modifiable lvalue
}

// constant return value
const int &bar(int &x) {
  x++;
  return x;
}

int main() {
  // 1. constant variables
  int a = 5;
  const int b = 5;
  // b = 42; // ERROR: expression must be a modifiable lvalue
  // int *p1 = &b; // ERROR: a value of type "const int *" cannot be used to
  // initialize an entity of type "int *"

  // 2. Pointer to a constant value
  const int *p1 = &b;
  // *p1 = 42; // ERROR: expression must be a modifiable lvalue

  // 3. Constant pointer
  int *const p2 = &a;
  *p2 = 42;
  // p2 = &b; // ERROR: expression must be a modifiable lvalue

  // 4. Constant pointer to a constant value
  const int *const p3 = &a;
  // *p3 = 42; // ERROR: expression must be a modifiable lvalue
  // p3 = &b; // ERROR: expression must be a modifiable lvalue

  // 5. constant object
  const A obj;
  //   obj.setX(5); // ERROR: the object has type qualifiers that are not
  //   compatible with the member function "A::setX"

  // 6. constant function parameter
  foo(a);

  // 7. constant return value
  //   int& c = bar(a); // ERROR: qualifiers dropped in binding reference of type "int
  //   &" to initializer of type "const int"

  // 7. constant return value
  const int &c = bar(a);
  //   c++; // ERROR: expression must be a modifiable lvalue

  return 0;
}
