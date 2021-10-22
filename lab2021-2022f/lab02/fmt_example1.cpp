#include "./fmt/format.h"

// compile and link (header only installation)
// g++ fmt1.cpp ./fmt/format.cc -std=c++11

int main() {
  fmt::print("The answer is {}.\n", 42);
  fmt::print("Elapsed time: {0:.2f} seconds\n", 1.23);
  fmt::print(stderr, "Don't {}!\n", "panic");
  fmt::print("Elapsed time: {s:.2f} seconds\n", fmt::arg("s", 1.23));
}