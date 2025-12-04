#include <exception>
#include <iostream>
using namespace std;

class SensorException : public exception {
 private:
  int val;

 public:
  SensorException(int value) : val(value) {}
  const char* what() const noexcept override { return "Negative sensor value"; }
  int value() const { return val; }
};

int read_sensor(int x) {
  if (x < 0) throw SensorException(x);
  return x;
}

int main() {
  int x;
  cout << "Enter sensor value: ";
  cin >> x;
  try {
    int value = read_sensor(x);
    cout << "Sensor reading: " << value << endl;
  } catch (const SensorException& e) {
    cout << "Exception: " << e.what() << " (value = " << e.value() << ")"
         << endl;
  }
  return 0;
}