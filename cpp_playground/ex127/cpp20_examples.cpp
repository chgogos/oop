// Modern C++ for absolute beginners
// https://stackoverflow.com/questions/47466358/what-is-the-spaceship-three-way-comparison-operator-in-c

#include <algorithm>
#include <concepts>
#include <iomanip>
#include <iostream>
#include <numbers>
#include <random>
#include <ranges>
#include <span>

using namespace std;

template <typename T>
  requires std::integral<T> || std::floating_point<T>
constexpr double average(std::vector<T> const &vec) {
  const double sum = std::accumulate(vec.begin(), vec.end(), 0.0);
  return sum / vec.size();
}

// returns 0 with 90% probability and 1 with 10% probability
int get_random_value() {
  static std::random_device rd;
  static std::mt19937 gen(rd());
  static std::discrete_distribution<> dist(
      {0.9, 0.1});  // A distribution that allows to specify probabilities
                    // for each outcome. {0.9, 0.1} corresponds to 90% for the
                    // first outcome (index 0) and 10% for the second (index 1).
  return dist(gen);
}

struct Point {
  int x;
  int y;
  auto operator<=>(const Point &) const = default;
};

int main() {
  cout << "1. Concepts" << endl;
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<double> v2 = {1.2, 2.7, 3.6, 4.2, 5.9};
  cout << average(v1) << endl;
  cout << average(v2) << endl;

  cout << "2. Lambda templates" << endl;
  auto my_lambda = []<typename T>(T a) { cout << typeid(T).name() << endl; };
  my_lambda(3);
  my_lambda(3.14);
  my_lambda("hello");

  cout << "3. Attributes [likely], [unlikely]" << endl;
  int choice = get_random_value();
  if (choice == 0) [[likely]] {
    cout << "The likely outcome occured!" << endl;
  } else [[unlikely]] {
    cout << "The unlikely outcome occured!" << endl;
  }

  cout << "4a. Ranges" << endl;
  vector<int> v3 = {5, 2, 3, 1, 4};
  ranges::sort(v3);  // sort algorithm overload
  for (auto &x : v3) {
    cout << x << " ";
  }
  cout << endl;
  cout << "4b. Ranges adaptors" << endl;
  vector<int> v4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto fv = v4 | views::filter([](auto x) { return x % 2 == 0; }) |
            views::filter([](auto x) { return x > 5; });
  ranges::reverse(fv);
  for (auto x : fv) {
    cout << x << " ";
  }
  cout << endl;

  cout << "5. std::span" << endl;
  vector<int> v5 = {1, 2, 3, 4, 5};
  span<int> vs = v5;  // dynamic extend span
  vs[2] = 42;
  for (auto x : v5) {
    cout << x << " ";
  }
  cout << endl;

  cout << "6. Mathematical constants" << endl;
  cout << numbers::pi << endl;
  cout << numbers::e << endl;
  cout << setprecision(14) << numbers::pi_v<double> << endl;

  cout << "7. 3-way comparisons:" << endl;
  int a = 1, b = 3;
  cout << "a = " << a << ", b = " << b << endl;
  auto c = a <=> b;  // spaceship operator
  if (c < 0) {
    cout << "a is less than b" << endl;
  } else if (c == 0) {
    cout << "a is equal to b" << endl;
  } else {
    cout << "a is greater than b" << endl;
  }
  Point p1{1, 1}, p2{1, 2};
  cout << "{1,1} != {2,1} " << (p1 != p2) << endl;
  cout << "{1,1} == {2,1} " << (p1 == p2) << endl;
  cout << "{1,1}  < {2,1} " << (p1 < p2) << endl;
  cout << "{1,1} <= {2,1} " << (p1 <= p2) << endl;
  cout << "{1,1}  > {2,1} " << (p1 > p2) << endl;
  cout << "{1,1} >= {2,1} " << (p1 >= p2) << endl;
}
