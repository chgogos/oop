#include <algorithm>
#include <iostream>
#include <vector>

void demonstrateVectorTraversals() {
  std::vector<int> vec = {1, 2, 3, 4, 5};

  // 1. Classic Index-based for loop
  std::cout << "1. Index-based for loop: ";
  for (size_t i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  // 2. Range-based for loop (C++11 and later)
  std::cout << "2. Range-based for loop: ";
  for (int num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // 3. Iterator-based for loop (forward iteration)
  std::cout << "3. Forward iterator for loop: ";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  // 4. Const iterator-based for loop
  std::cout << "4. Const iterator for loop: ";
  for (auto cit = vec.cbegin(); cit != vec.cend(); ++cit) {
    std::cout << *cit << " ";
  }
  std::cout << std::endl;

  // 5. Reverse iterator-based for loop
  std::cout << "5. Reverse iterator for loop: ";
  for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
    std::cout << *rit << " ";
  }
  std::cout << std::endl;

  // 6. While loop with iterator
  std::cout << "6. While loop with iterator: ";
  auto it = vec.begin();
  while (it != vec.end()) {
    std::cout << *it << " ";
    ++it;
  }
  std::cout << std::endl;

  // 7. Using std::for_each algorithm
  std::cout << "7. std::for_each algorithm: ";
  std::for_each(vec.begin(), vec.end(),
                [](int num) { std::cout << num << " "; });
  std::cout << std::endl;

  // 8. Pointer-based traversal
  std::cout << "8. Pointer-based traversal: ";
  int* ptr = vec.data();
  int* end = vec.data() + vec.size();
  while (ptr < end) {
    std::cout << *ptr << " ";
    ++ptr;
  }
  std::cout << std::endl;
}

int main() {
  demonstrateVectorTraversals();
  return 0;
}