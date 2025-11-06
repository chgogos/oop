#include <iostream>
using namespace std;

int main() {
  int arr[] = {5, 2, 9, 1, 5, 6};
  cout << "Array elements: ";
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}