#include <iostream>
#include <vector>

template <class T>
int find_occurrences(std::vector<T> v, T k) {
  int c = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == k) {
      c++;
    }
  }
  return c;
}

struct point {
  int x;
  int y;
};

bool operator==(const point &p1, const point &p2) {
  return (p1.x == p2.x && p1.y == p2.y);
}

int main() {
  std::vector<int> v1{0, 1, 2, 3, 1, 5, 6, 1, 8, 9};
  std::cout << "1. " << find_occurrences(v1, 1) << std::endl;

  std::vector<double> v2{0.5, 1.5, 2.5, 3.5, 1.5, 5.5, 6.5, 1.5, 8.5, 9.5};
  std::cout << "2. " << find_occurrences(v2, 1.5) << std::endl;

  std::vector<point> v3{{1, 1}, {3, 5}, {1, 1}, {2, 3}, {1, 1}};
  std::cout << "3. " << find_occurrences(v3, {1, 1}) << std::endl;

  return 0;
}
