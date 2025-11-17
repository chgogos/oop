#include <iostream>

using namespace std;

class MyClass {
 public:
  void SayHello(int);
};

void MyClass::SayHello(int x) { cout << "HI! " << x << "\n"; }

int main() {
  MyClass* C1 = new MyClass;

  (*C1).SayHello(1);
  C1->SayHello(2);

  delete C1;
  return 0;
}

/*
HI! 1
HI! 2
*/
