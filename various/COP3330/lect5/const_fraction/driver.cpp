// driver.cpp
// Bob Myers
// Test the Add and Equals functions

#include <iostream>

#include "frac.h"

using namespace std;

int main() {
  Fraction f1, f2, f3, f4;
  cout << "Enter fraction f1: ";
  f1.Input();
  cout << "Enter fraction f2: ";
  f2.Input();

  cout << "\nf1 = ";
  f1.Show();
  cout << "\nf2 = ";
  f2.Show();

  cout << "\n\n";

  if (Equals(f1, f2))
    cout << "f1 and f2 are equal\n";
  else
    cout << "f1 and f2 are NOT equal\n";

  f3 = Add(f1, f2);
  cout << "f1 + f2 = ";
  f3.Show();
  cout << '\n';

  const Fraction f10(10);
  cout << "numerator = " << f10.GetNumerator()
       << ", denominator = " << f10.GetDenominator() << endl;
  // f10.SetValue(2, 30);

  return 0;
}

/*
Enter fraction f1: 2/3
Enter fraction f2: 3/4

f1 = 2/3
f2 = 3/4

f1 and f2 are NOT equal
f1 + f2 = 17/12
numerator = 10, denominator = 1
*/
