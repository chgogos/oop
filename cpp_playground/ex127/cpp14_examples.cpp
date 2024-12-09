// Based on "Modern C++ for absolute beginners"

#include <iostream>
#include <memory>

using namespace std;

auto fun() { return 42; }

int main() {
  cout << "1. Binary literals" << endl;
  int x1 = 0b01010111;  // 87
  cout << x1 << endl;

  cout << "2. Digit separators" << endl;
  int x2 = 1'000'000;
  cout << x2 << endl;

  cout << "3. auto for functions" << endl;
  auto x3 = fun();
  cout << x3 << endl;

  cout << "4. auto parameters in lambda functions" << endl;
  auto anon = [](auto x) { cout << x << endl; };
  anon(101);
  anon(3.14);
  anon("text");

  cout << "5. std::make_unique" << endl;
  auto p1 = make_unique<int>(105);
  cout << *p1 << endl;
  //   auto p2 = make_unique<int>(106);
  //   p2 = p1; // not ok
}

/*
1. Binary literals
87
2. Digit separators
1000000
3. auto for functions
42
4. auto parameters in lambda functions
101
3.14
text
5. std::make_unique
105
*/