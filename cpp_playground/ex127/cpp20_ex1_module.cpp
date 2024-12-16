export module cpp20_ex1_module;
#include <iostream>

export void fun1() {
  std::cout << "fun1() called" << "\n";
  fun2();
}
void fun2() { std::cout << "fun2() called" << "\n"; }
