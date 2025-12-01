#include <iostream>
#include <string>
#include <vector>

template <typename T>
class Stack {
  std::vector<T> data;

 public:
  void push(const T& value) { data.push_back(value); }
  void pop() {
    if (!data.empty()) data.pop_back();
  }
  T top() const { return data.back(); }
  bool empty() const { return data.empty(); }
};

int main() {
  Stack<int> s1;
  s1.push(10);
  s1.push(20);
  std::cout << "Top of int stack: " << s1.top() << "\n";
  s1.pop();
  std::cout << "After pop, top: " << s1.top() << "\n";

  Stack<std::string> s2;
  s2.push("Arta");
  s2.push("Ioannina");
  std::cout << "Top of string stack: " << s2.top() << "\n";
  s2.pop();
  std::cout << "After pop, top: " << s2.top() << "\n";

  return 0;
}
