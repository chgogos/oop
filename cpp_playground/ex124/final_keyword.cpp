// https://stackoverflow.com/questions/8824587/what-is-the-purpose-of-the-final-keyword-in-c11-for-functions

#include <iostream>
using namespace std;

class base {
public:
  virtual void foo(float x) { cout << "base::foo" << endl; }
};

class derived : public base {
public:
  void foo(float x) final { cout << "derived::foo" << endl; }
};

class derived2 final : public base {
public:
  void foo(float x) { cout << "derived2::foo" << endl; }
};

// class furtherderived : public derived {
// public:
//   void foo(float x) { cout << "furtherderived::foo" << endl; } // error: declaration of 'bar' overrides a 'final' function
// };

// class furtherderived2 : public derived2 { // error: base 'derived2' is marked 'final'
// public:
//   void foo(float x) { cout << "furtherderived2::foo" << endl; } 
// };

int main() {
  
}