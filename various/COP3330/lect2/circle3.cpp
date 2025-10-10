#include <iostream>

using namespace std;

// Δήλωση και ορισμός κλάσης Circle
class Circle {
 public:
  Circle() {
    center_x = 0.0;
    center_y = 0.0;
    radius = 5.0;
    cout << "Default constructor Circle() called" << endl;
  }
  Circle(double r) {
    center_x = 0.0;
    center_y = 0.0;
    radius = r;
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
  Circle c1;
  c1.Draw();
  cout << "Area: " << c1.AreaOf() << endl;
  c1.setCenter(7.1, 2.3);
  c1.SetRadius(16.6);
  cout << "Area: " << c1.AreaOf() << endl;
  Circle c2(13.5);
  c2.Draw();
  cout << "Area: " << c2.AreaOf() << endl;
}
