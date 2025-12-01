#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main() {
  std::stack<int, std::vector<int>> s1;
  s1.push(10);
  s1.push(20);
  std::cout << "Top of int stack: " << s1.top() << "\n";
  s1.pop();
  std::cout << "After pop, top: " << s1.top() << "\n";

  std::stack<std::string, std::vector<std::string>> s2;
  s2.push("Arta");
  s2.push("Ioannina");
  std::cout << "Top of string stack: " << s2.top() << "\n";
  s2.pop();
  std::cout << "After pop, top: " << s2.top() << "\n";

  return 0;
}
