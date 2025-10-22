#include <iostream>
using namespace std;

class Vector2D {
 private:
  double x, y;

 public:
  Vector2D(double x_val = 0.0, double y_val = 0.0) : x(x_val), y(y_val) {}

  Vector2D operator+(Vector2D other) {
    return Vector2D(x + other.x, y + other.y);
  }

  Vector2D operator++() {
    ++x;
    ++y;
    return *this;
  }

  void print() const { cout << "(" << x << ", " << y << ")" << endl; }
};

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
