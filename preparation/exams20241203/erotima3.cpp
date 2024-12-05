#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> numbers = {10, 20, 30, 40, 50};
  int index;

  while (true) {
    try {
      std::cout << "Enter an index to access the vector: ";
      std::cin >> index;

      int value = numbers.at(index);

      std::cout << "The value at index " << index << " is: " << value
                << std::endl;
      break;  // Τερματισμός του προγράμματος αν δεν προκύψει εξαίρεση
    } catch (const std::out_of_range& e) {
      std::cout << "Error: The index is out of bounds of the vector."
                << std::endl;
    }
  }

  return 0;
}
