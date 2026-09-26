#include <string>
#include "./fmt/format.h"

// g++ fmt_example2.cpp format.cc -std=c++11

int main()
{
  // τοποθέτηση μορφοποιημένου κειμένου σε std::string
  std::string msg = fmt::format("Name = {}, Age = {}", "Maria", 20);
  fmt::print("{}\n", msg);

  // αρίθμηση παραμέτρων
  fmt::print("The right order is {0} {2} {1} and the reverse is {1} {2} {0}\n", 1, 3, 2);

  // ονόματα ορισμάτων
  fmt::print("Name = {name}, Age = {age}\n", fmt::arg("name", "Maria"), fmt::arg("age", "20"));
}

// Name = Maria, Age = 20
// The right order is 1 2 3 and the reverse is 3 2 1
// Name = Maria, Age = 20