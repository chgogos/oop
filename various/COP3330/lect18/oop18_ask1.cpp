#include <iostream>
using namespace std;

int read_sensor(int x) {
  if (x < 0) throw x;
  return x;
}

int main() {
  int x;
  cout << "Enter sensor value: ";
  cin >> x;

  try {
    int value = read_sensor(x);
    cout << "Sensor reading: " << value << endl;
  } catch (int e) {
    cout << "Exception thrown with value: " << e << endl;
  }
  cout << "Program terminated!" << endl;
  return 0;
}
