#include <iostream>
#include <string>

using std::string;

class Thing {
 public:
  Thing(const char* n);
  ~Thing();

 private:
  string name;
};

Thing::Thing(const char* n) {
  name = n;
  std::cout << "Constructor running for " << name << std::endl;
}

Thing::~Thing() { std::cout << "Destructor running for " << name << std::endl; }

void foo() {
  Thing TFoo("Tfoo");
  return;
}

int main() {
  Thing T1("T1");

  std::cout << "Hello" << std::endl;

  foo();
  Thing T2("T2");

  return 0;
}

/* Έξοδος
Constructor running for T1
Hello
Constructor running for Tfoo
Destructor running for Tfoo
Constructor running for T2
Destructor running for T2
Destructor running for T1
*/