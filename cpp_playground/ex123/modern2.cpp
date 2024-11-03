// https://lemire.me/blog/2024/11/02/having-fun-with-modern-c/
// g++ -std=c++23 modern2.cpp

#include <algorithm>
#include <chrono>
#include <format>
#include <iostream>
#include <print>
#include <ranges>
#include <string_view>
#include <vector>

void print(auto... args) { (std::println("{:->50}", args), ...); }

void prints() { print("a", 1, "b", 2, "c", 3); }

int main() {
  // print vector
  std::vector<int> v = {1, 2, 3, 4, 5};
  std::println("{}", v);

  // centered in a line of 40 characters, with underscore characters around it
  std::println("{:_^40}", v);

  // print vector in reverse order
  std::println("{}", v | std::views::reverse);

  // print maximum
  std::println("{}", std::ranges::max(v));

  // print date
  std::string_view name = "Daniel";
  std::println("Hello, {0} today is {1:%Y-%m-%d %X}, good day {0}!", name,
               std::chrono::system_clock::now());

  // fold
  prints();

  // print the integer 4 in binary (100) and know how many trailing 0 bits there are
  std::println("{:b} {}", 4u, std::countr_zero(4u));

}