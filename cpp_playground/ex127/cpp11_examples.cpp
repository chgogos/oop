#include <iostream>
#include <memory>
#include <tuple>
#include <vector>

using namespace std;

int main() {
  // 1. automatic type deduction
  auto x = 42;

  // 2. Range based loops
  for (auto x : {1, 2, 3, 4}) {
    cout << x << endl;
  }

  // 3. Initalizer list
  int y{42};
  //   int z{3.14}; // error: type 'double' cannot be narrowed to 'int' in
  //   initializer list [-Wc++11-narrowing]
  vector<int> v{1, 2, 3, 4, 5};

  // 4. move semantics

  // 5. lambda expressions
  cout << count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; })
       << endl;

  // 6. constexpr
  constexpr double pi = 3.14;

  // 7. scoped enumerators

  // 8. smart pointers
  unique_ptr<int> p1(new int(42));
  // unique_ptr<int> p2 = p1; // error p1 is a unique pointer
  cout << *p1 << endl;

  shared_ptr<int> p3(new int(42));
  shared_ptr<int> p4 = p3;
  *p3 = 55;
  cout << *p3 << " " << *p4 << endl;

  // 9. tuple
  tuple<int, char, double> t{42, 'a', 3.14};
  cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

  // 10. static_assert
  constexpr int z = 1023 + 1;
  static_assert(z == 1024, "OK");

  // 11. concurrency

  // 12. deleted, defaulted functions

  // 13. type aliases
  using vi = vector<int>;
  vi v2{1, 2, 3, 4, 5};
}
