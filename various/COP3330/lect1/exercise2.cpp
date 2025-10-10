#include <iomanip>
#include <iostream>
using namespace std;

class Temperature {
public:
  double celsius;
  void set_celsius(double c);
  double to_fahrenheit();
  void increase(double d);
  void decrease(double d);
  void display();
};

void Temperature::set_celsius(double c) { celsius = c; }

double Temperature::to_fahrenheit() { return celsius * 9.0 / 5.0 + 32.0; }

void Temperature::increase(double d) { celsius += d; }

void Temperature::decrease(double d) { celsius -= d; }

void Temperature::display() {
  cout << fixed << setprecision(2);
  cout << "Celsius: " << celsius << "°C, "
       << "Fahrenheit: " << to_fahrenheit() << "°F" << endl;
}

int main() {
  Temperature temp;
  temp.set_celsius(20.0);
  temp.increase(5.5);
  temp.display();
  temp.decrease(15.0);
  temp.display();
  return 0;
}