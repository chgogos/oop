#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<int> v{3, 1, 4, 2};
  std::sort(v.begin(), v.end(), greater<>());
  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;
}
