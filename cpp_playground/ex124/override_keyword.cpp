// https://stackoverflow.com/questions/18198314/what-is-the-override-keyword-in-c-used-for
// The override keyword serves two purposes:
// It shows the reader of the code that "this is a virtual method, that is
// overriding a virtual method of the base class." The compiler also knows that
// it's an override, so it can "check" that you are not altering/adding new
// methods that you think are overrides.

#include <iostream>
using namespace std;

class base {
public:
  virtual void foo(float x) { cout << "base::foo" << endl; }
  void bar(float x) { cout << "base::bar" << endl; }
};

class derived : public base {
public:
  void foo(float x) override { cout << "derived::foo" << endl; } // OK
  // void bar(float x) override { cout << "derived::bar" << endl; } // error: only virtual member functions can be marked 'override'
};

// class derived2 final : public base {
// public:
//   void foo(int x) override {
//     cout << "derived2::foo" << endl;
//   } // error: non-virtual member function marked 'override' hides virtual member
//     // function
// };

int main() {
}