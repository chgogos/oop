
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<std::string> names = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Henry", "Isabella", "Jack"};

  // Iterate through the vector using a for loop
  std::cout << "Iterating through the vector using a for loop:" << std::endl;
  for (int i = 0; i < names.size(); i++) {
    std::cout << names[i] << std::endl;
  }

  // Iterate through the vector using a range-based for loop
  std::cout << "Iterating through the vector using a range-based for loop:" << std::endl;
  for (const auto& name : names) {
    std::cout << name << std::endl;
  }

  // Iterate through the vector using an iterator
  std::cout << "Iterating through the vector using an iterator:" << std::endl;
  for (auto it = names.begin(); it != names.end(); it++) {
    std::cout << *it << std::endl;
  }

  // Sort the vector in alphabetical order
  std::sort(names.begin(), names.end());

  // Print the sorted vector
  std::cout << "Sorted vector:" << std::endl;
  for (const auto& name : names) {
    std::cout << name << std::endl;
  }

  return 0;
}
