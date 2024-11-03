// g++ -std=c++23 modern1.cpp

#include <print>
#include <string>
#include <vector>

int main() {
  // print vector
  int a = 42;
  double b = 3.14;
  std::vector<int> v = {1, 2, 3, 4, 5};
  std::string s = "Chris";

  std::println("{} {} {} {}", a, b, v, s);
}