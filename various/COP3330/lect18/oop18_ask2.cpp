#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {10, 20, 30, 40, 50};
  int index;

  cout << "Enter an index: ";
  cin >> index;

  try {
    int value = v.at(index);  // may throw std::out_of_range
    cout << "Value at index " << index << ": " << value << endl;
  } catch (const out_of_range& e) {
    cout << "Exception: " << e.what() << endl;
  }

  return 0;
}
