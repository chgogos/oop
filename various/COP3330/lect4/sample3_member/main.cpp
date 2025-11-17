#include <iostream>

#include "Fraction.hpp"

using namespace std;

int main() {
  Fraction f1(1, 2);
  Fraction f2(2, 4);

  if (f1.Equals(f2)) cout << "The fractions are equal" << endl;

  f2.SetValue(2, 7);
  Fraction f3 = f1.Add(f2);
  f3.Show();
  cout << "Decimal value: " << f3.Evaluate() << endl;
  return 0;
}

/* Έξοδος
The fractions are equal
11/14
Decimal value: 0.785714
*/