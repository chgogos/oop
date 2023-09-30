#include "./fmt/format.h"

// compile and link (header only installation)
// g++ fmt_example1.cpp format.cc -std=c++11

int main() {
  fmt::print("The answer is {}.\n", 42);
  fmt::print("Elapsed time: {0:.2f} seconds\n", 1.23);
  fmt::print(stderr, "Don't {}!\n", "panic");
  fmt::print("Elapsed time: {s:.2f} seconds\n", fmt::arg("s", 1.23));
}

// The answer is 42.
// Elapsed time: 1.23 seconds
// Don't panic!
// Elapsed time: 1.23 seconds