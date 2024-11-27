#include <iostream>
#include <vector>
using namespace std;

void unsafe(vector<int> v) {
  cout << __func__ << endl;

  for (int i = 0; i < 10; i++) {
    cout << v[i] << endl;
  }
}

void safe_exception_not_caught(vector<int> v) {
  cout << __func__ << endl;
  for (int i = 0; i < 10; i++) {
    cout << v.at(i) << endl;
  }
}

void safe_exception_caught(vector<int> v) {
  cout << __func__ << endl;
  for (int i = 0; i < 10; i++) {
    try {
      cout << v.at(i) << endl;
    } catch (const out_of_range& ex) {
      cerr << "exception caught out of bounds for index " << i << endl;
    }
  }
}

int main() {
  vector<int> v{1, 2, 3, 4, 5};

  safe_exception_caught(v);
  unsafe(v);
  safe_exception_not_caught(v);
}
