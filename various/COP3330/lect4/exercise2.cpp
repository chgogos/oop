#include <iostream>
#include <string>
using namespace std;

class Temperature {
 private:
  double celsius;

 public:
  Temperature(string tempStr) {
    if (tempStr.empty()) {
      celsius = 0;
      return;
    }
    char unit = tempStr.back();
    string numberPart = tempStr.substr(0, tempStr.size() - 1);
    double value = stod(numberPart);
    if (unit == 'C' || unit == 'c') {
      celsius = value;
    } else if (unit == 'F' || unit == 'f') {
      celsius = (value - 32) * 5.0 / 9.0;
    } else {
      cerr << "Invalid temperature measurement unit!\n";
      celsius = 0;
    }
  }

  void display() const {
    cout << "Temperature in Celsius: " << celsius << endl;
  }
};

int main() {
  Temperature t1 = string("50C");
  Temperature t2 = string("122F");
  t1.display();
  t2.display();
  return 0;
}
