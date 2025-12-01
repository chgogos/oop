#include <iostream>
using namespace std;

class Polynomial {
 private:
  double a, b, c;

 public:
  Polynomial() : a(1), b(1), c(1) {}

  Polynomial(double a, double b, double c) : a(a), b(b), c(c) {}

  void show() const {
    cout << a << "x^2 ";
    if (b >= 0)
      cout << "+ " << b << "x ";
    else
      cout << "- " << -b << "x ";
    if (c >= 0)
      cout << "+ " << c;
    else
      cout << "- " << -c;
    cout << endl;
  }

  double calc(double x) const { return a * x * x + b * x + c; }

  Polynomial operator+(const Polynomial& other) const {
    return Polynomial(a + other.a, b + other.b, c + other.c);
  }
};

int main() {
  Polynomial p1(3, -2, 1);
  Polynomial p2(1, 1, 2);
  Polynomial p3 = p1 + p2;

  cout << "P1(x) = ";
  p1.show();
  cout << "P2(x) = ";
  p2.show();
  cout << "P3(x) = ";
  p3.show();

  cout << "\nValues for x = 1..10:\n\n";

  for (int x = 1; x <= 10; x++) {
    cout << "x = " << x << "   P1 = " << p1.calc(x) << "   P2 = " << p2.calc(x)
         << "   P3 = " << p3.calc(x) << endl;
  }

  return 0;
}
