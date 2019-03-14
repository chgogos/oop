#include "../fmt/format.h"

// compile and link
// g++ fmt1.cpp -std=c++11 -lfmt
int main() {
  fmt::print("The answer is {}.\n", 42);
  fmt::print("Elapsed time: {0:.2f} seconds\n", 1.23);
  fmt::print(stderr, "Don't {}!\n", "panic");
  fmt::print("Elapsed time: {s:.2f} seconds\n", fmt::arg("s", 1.23));
}
