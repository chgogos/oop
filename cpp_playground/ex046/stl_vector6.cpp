#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main() {
  vector<int> v{23, 12, 7, 18};
  for (int i = 0; i <= v.size(); i++) {
    try {
      cout << v.at(i) << endl;
    } catch (std::out_of_range oor) {
      cout << "out of bounds: " << oor.what() << endl;
    }
  }
  cout << "Bye" << endl;
}