#include <iostream>

using namespace std;

using ull = unsigned long long;

constexpr ull factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1); }

int main() {
  int x = 5;
  // υπολογισμός κατά το χρόνο μεταγλώττισης
  constexpr ull f5 = factorial(5);
  cout << f5 << endl;

  // υπολογισμός κατά το χρόνο εκτέλεσης
  ull fx = factorial(x);
  cout << fx << endl;
  return 0;
}
