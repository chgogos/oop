#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void traversals() {
  cout << __func__ << endl;
  vector<int> v = {7, 3, 2, 5, 8, 1, 9};
  // 1.
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
  }
  cout << endl;

  // 2.
  for (int x : v) {
    std::cout << x << ' ';
  }
  cout << endl;

  // 3.
  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << ' ';
  }
  cout << endl;

  // 4.
  for_each(v.begin(), v.end(), [](int x) { cout << x << ' '; });
  cout << endl;

  // 5.
  int *ptr = v.data();
  int *end = v.data() + v.size();
  while (ptr < end) {
    cout << *ptr << " ";
    ptr++;
  }
  cout << endl;
}

void vector_sum() {
  cout << __func__ << endl;
  vector<int> v = {7, 3, 2, 5, 8, 1, 9};

  // 1.
  int sum = 0;
  for (int i = 0; i < v.size(); i++) {
    sum += v[i];
  }
  cout << "SUM = " << sum << endl;

  // 2.
  sum = 0;
  for (const int &x : v) {
    sum += x;
  }
  cout << "SUM = " << sum << endl;

  // 3.
  cout << "SUM = " << accumulate(v.begin(), v.end(), 0) << endl;

  // 4.
}

int main() {
  traversals();
  vector_sum();
}
