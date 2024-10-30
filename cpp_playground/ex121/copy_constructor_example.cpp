#include <iostream>
using namespace std;

class MyClass {
public:
  // default constructor
  MyClass() : value(0) {}

  // constructor with 1 integer argument
  MyClass(int x) : value(x) {}

  // Copy constructor
  MyClass(const MyClass &other) {
    value = other.value;
    std::cout << "Copy constructor called!" << std::endl;
  }

  void display() { cout << "Value = " << value << endl; }

private:
  int value;
};

int main() {
  MyClass obj1; // default constructor called
  MyClass obj2(10);
  MyClass obj3(obj1);  // Copy constructor called
  MyClass obj4 = obj2; // Copy constructor called

  obj1.display();
  obj2.display();
  obj3.display();
  obj4.display();

  return 0;
}