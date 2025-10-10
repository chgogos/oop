#include <iostream>

using namespace std;

// Δήλωση και ορισμός κλάσης Circle
class Circle {
 public:
  Circle() : radius(5.0), center_x(0.0), center_y(0.0) {
    cout << "Default constructor Circle() called" << endl;
  }
  Circle(double r) : radius(r), center_x(0.0), center_y(0.0) {
    cout << "Constructor Circle(double) called" << endl;
  }
  void setCenter(double x, double y) {
    center_x = x;
    center_y = y;
  }
  void SetRadius(double r) { radius = r; }
  void Draw() {
    cout << "A circle having center at " << center_x << ", " << center_y
         << " and radius " << radius << endl;
  }
  double AreaOf() { return 3.14 * radius * radius; }

 private:
  double radius;
  double center_x;
  double center_y;
};

// Πρόγραμμα οδηγός
int main() {
  Circle c1(5);
  c1.Draw();
  cout << "Area: " << c1.AreaOf() << endl;
}
