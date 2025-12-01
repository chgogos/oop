#include <iostream>
#include <string>
#include <vector>

template <typename T>
int index_of(const std::vector<T>& vec, int size, const T& target) {
  for (int i = 0; i < size; ++i) {
    if (vec[i] == target) {
      return i;
    }
  }
  return -1;
}

template <typename T>
void swap_values(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

int main() {
  std::vector<int> v_int = {10, 20, 30, 40, 50};
  std::vector<std::string> v_str = {"arta", "ioannina", "preveza",
                                    "igoumenitsa"};

  int idx_int = index_of(v_int, v_int.size(), 30);
  int idx_str = index_of(v_str, v_str.size(), std::string("preveza"));

  std::cout << "position of 30 in v_int: " << idx_int << std::endl;
  std::cout << "position of \"preveza\" in v_str: " << idx_str << std::endl;

  int a = 5, b = 9;
  std::cout << "\nbefore swap (int): a = " << a << ", b = " << b << std::endl;
  swap_values(a, b);
  std::cout << "after swap (int): a = " << a << ", b = " << b << std::endl;

  float x = 1.5f, y = 3.7f;
  std::cout << "\nbefore (float): x = " << x << ", y = " << y << std::endl;
  swap_values(x, y);
  std::cout << "after (float): x = " << x << ", y = " << y << std::endl;

  return 0;
}
