#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v{1, 2, 3};

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  for (auto rit = v.rbegin(); rit != v.rend(); ++rit) {
    cout << *rit << " ";
  }
  cout << endl;
}