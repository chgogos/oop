#include <iostream>

using namespace std;

class Circle;  // forward declaration

class Rectangle {
 private:
  double width;
  double height;

 public:
  Rectangle(double w, double h) : width(w), height(h) {}

  friend void compareArea(Rectangle rect, Circle circ);
};

class Circle {
 private:
  double radius;

 public:
  Circle(double r) : radius(r) {}

  friend void compareArea(Rectangle rect, Circle circ);
};

void compareArea(Rectangle rect, Circle circ) {
  double areaRect = rect.width * rect.height;
  double areaCirc = 3.14 * circ.radius * circ.radius;
  cout << "Rectangle area: " << areaRect << endl;
  cout << "Circle area: " << areaCirc << endl;
  if (areaRect > areaCirc)
    cout << "The rectangle has greater area." << endl;
  else if (areaRect < areaCirc)
    cout << "The circle has greater area." << endl;
  else
    cout << "Both shapes have the same area." << endl;
}

int main() {
  Rectangle rect(10, 12);
  Circle circ(6);
  compareArea(rect, circ);
  return 0;
}
