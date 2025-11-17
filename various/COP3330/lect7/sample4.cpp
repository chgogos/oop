#include <iostream>

using namespace std;

class Circle {
 public:
  Circle(int);
  float radius;
};

Circle::Circle(int r) { radius = r; }

class Square {
 public:
  Square(int);
  float getlength();

 private:
  float length;
};

Square::Square(int l) { length = l; }

float Square::getlength() { return (length); }

class ShapeHolder {
 public:
  ShapeHolder();
  Circle c1;
  Square s1;
};

ShapeHolder::ShapeHolder() : c1(1), s1(2) {}

int main() {
  ShapeHolder s1;

  cout << "ShapeHolder Circle Radius: " << s1.c1.radius << endl;
  cout << "ShapeHolder Square Length: " << s1.s1.getlength() << endl;

  return 0;
}

/* έξοδος
ShapeHolder Circle Radius: 1
ShapeHolder Square Length: 2
*/