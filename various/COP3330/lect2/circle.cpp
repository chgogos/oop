#include <iostream>

using namespace std;

// Δήλωση κλάσης Circle
class Circle {
public:
  Circle();         // αυτός είναι ένας κατασκευαστής
  Circle(double r); // και αυτός είναι ένας κατασκευαστής
  void setCenter(double x, double y);
  void SetRadius(double r);
  void Draw();
  double AreaOf();

private:
  double radius;
  double center_x;
  double center_y;
};

// Ορισμοί συναρτήσεων μελών κλάσης Circle
Circle::Circle() : radius(5.0), center_x(0.0), center_y(0.0) {
  cout << "Default constructor Circle() called" << endl;
}

Circle::Circle(double r) : radius(r), center_x(0.0), center_y(0.0) {
  cout << "Constructor Circle(double) called" << endl;
}

void Circle::setCenter(double x, double y) {
  center_x = x;
  center_y = y;
}

void Circle::SetRadius(double r) { radius = r; }

void Circle::Draw() {
  cout << "A circle having center at " << center_x << ", " << center_y
       << " and radius " << radius << endl;
}

double Circle::AreaOf() { return 3.14 * radius * radius; }

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
