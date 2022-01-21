#include <iostream>
template <class T> T fun(T a, T b, T c) {
  T min = a;
  if (b < min)
    min = b;
  if (c < min)
    min = c;
  return min;
}
int main() {
  std::cout << fun(42, 36, 19) << std::endl;
  std::cout << fun("arta", "ioannina", "preveza") << std::endl;
}
