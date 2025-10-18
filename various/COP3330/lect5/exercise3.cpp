#include <iostream>
using namespace std;

class Circle {
  const double pi;
  double radius;

 public:
  Circle(double r) : pi(3.14), radius(r) {}

  double area() const { return pi * radius * radius; }

  void setRadius(double r) { radius = r; }
};

int main() {
  const Circle c(5.0);
  cout << "Area: " << c.area() << endl;

  // c.setRadius(10.0);  // Σφάλμα

  return 0;
}
