#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> msg{"Hello", "World", "again!"};
  for (const string &w : msg) {
    cout << w << " ";
  }
  cout << endl;
}