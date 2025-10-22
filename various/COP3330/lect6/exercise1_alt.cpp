#include <iostream>
using namespace std;

class Vector2D {
 private:
  double x, y;

 public:
  Vector2D(double x_val = 0.0, double y_val = 0.0) : x(x_val), y(y_val) {}

  Vector2D& operator++() {
    ++x;
    ++y;
    return *this;
  }

  void print() const { cout << "(" << x << ", " << y << ")" << endl; }

  friend Vector2D operator+(const Vector2D& a, const Vector2D& b);
};

Vector2D operator+(const Vector2D& a, const Vector2D& b) {
  return Vector2D(a.x + b.x, a.y + b.y);
}

int main() {
  Vector2D v1(2, 3);
  Vector2D v2(1, 4);
  Vector2D v3 = v1 + v2;
  ++v3;
  cout << "v1 = ";
  v1.print();
  cout << "v2 = ";
  v2.print();
  cout << "v3 = ";
  v3.print();

  return 0;
}
