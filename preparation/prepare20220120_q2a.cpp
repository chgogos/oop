#include <iostream>
class A {
public:
  int x = 1;
};

class C {
public:
  int y = 2;
};

class B : public A {
public:
  int z = 3;
  C c_obj;

  void fun() { std::cout << x << c_obj.y << z; }
};

int main() {
  B obj;
  obj.fun();
}
