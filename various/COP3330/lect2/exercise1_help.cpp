#include <iostream>
#include <print>  // διαθέσιμο από C++23
#include <string>
#include <vector>

int main() {
  std::vector<int> v;
  v.push_back(4);
  v.push_back(2);
  v.push_back(4);

  for (int x : v) {
    std::print("{:d}\n", x);
  }

  std::print("# of items = {}, empty = {}\n", v.size(), v.empty());

  double avg = static_cast<double>(v[0] + v[1] + v[2]) / v.size();
  std::string s = std::format("Average value = {:.2f}", avg);
  std::cout << s << std::endl;

  return 0;
}