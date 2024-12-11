// Based on "Modern C++ for absolute beginners"

#include <any>
#include <filesystem>
#include <iostream>
#include <string_view>
#include <utility>
#include <variant>
#include <vector>

using namespace std;

// pre C++17 way of having nested namespaces
namespace ns1 {
namespace ns2 {
void fun() { cout << "Hello from " << __func__ << " in ns1::ns2" << endl; }
}  // namespace ns2
}  // namespace ns1

// C++17 nested namespaces using namespace resolution operator
namespace ns3::ns4 {
void fun() { cout << "Hello from " << __func__ << " in ns2::ns3" << endl; }
}  // namespace ns3::ns4

int main() {
  cout << "1. Nested namespaces" << endl;
  ns1::ns2::fun();
  ns3::ns4::fun();

  cout << "2. Constexpr lambdas" << endl;
  constexpr auto lambda1 = [](int x) { return x * x; };
  auto lambda2 = [](int x) constexpr { return x * x; };  // equivalent syntax
  static_assert(lambda1(10) == 100, "ERROR");
  static_assert(lambda2(10) == 100, "ERROR");

  cout << "3. Structured bindings" << endl;
  pair<int, double> p{100, 3.14};
  auto [a, b] = p;
  cout << a << " " << b << endl;
  a += 1;
  cout << p.first << " " << p.second << endl;
  auto& [c, d] = p;
  c += 1;
  cout << c << " " << d << endl;
  cout << p.first << " " << p.second << endl;

  vector<tuple<int, int, int>> v{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (auto [x, y, z] : v) {
    cout << x << "-" << y << "-" << z << endl;
  }

  cout << "4. std::filesystem" << endl;
  for (auto f : filesystem::directory_iterator(".")) {
    cout << f.path() << endl;
  }

  cout << "5. std::string_view" << endl;
  string s = "Hello";
  string_view sv(s);
  s[0] = 'X';
  //   sv[0] = 'Y';  // changes are not allowed through string_view
  cout << s << endl;
  cout << sv << endl;

  cout << "6. std::any" << endl;
  any a1 = 123;
  any a2 = string("abc");
  any a3 = true;
  any a4 = "def";
  any a5{};
  cout << any_cast<int>(a1) << endl;
  cout << any_cast<string>(a2) << endl;
  cout << any_cast<bool>(a3) << endl;
  cout << any_cast<const char*>(a4) << endl;
  if (!a5.has_value()) {
    cout << "No value" << endl;
  }

  cout << "7. std::variant" << endl;
  variant<char, int, double> my_variant{123};
  cout << "Get the int value " << get<int>(my_variant) << endl;
  cout << "Get the int value " << get<1>(my_variant) << endl;
  my_variant = 'a';
  cout << "Get the char value " << get<char>(my_variant) << endl;
  cout << "Get the char value " << get<0>(my_variant) << endl;
  try {
    my_variant = 3.14;
    cout << "Get the double value " << get<double>(my_variant) << endl;
    cout << "Get the double value " << get<2>(my_variant) << endl;
    cout << "Get the double value " << get<int>(my_variant) << endl;
  } catch (bad_variant_access& ex) {
    cout << "Exception raised: " << ex.what();
  }
}