#include <iostream>
using namespace std;

int main() {
  int arr[3] = {10, 20, 30};
  cout << "Valid index access: arr[2] = " << arr[2] << endl;

  // Out of bounds access – undefined behavior!
  cout << "Invalid index access: arr[5] = " << arr[5] << endl;
  return 0;
}
