#include <iostream>

using namespace std;

int main() {
  int* MyIntArray;
  int val;

  cout << "How many numbers will you enter?";
  cin >> val;

  MyIntArray = new int[val];

  for (int i = 0; i < val; i++) {
    cout << "Enter number:\n";
    cin >> MyIntArray[i];
  }

  for (int i = 0; i < val; i++) cout << "*" << MyIntArray[i] << "\n";

  delete[] MyIntArray;
  return 0;
}