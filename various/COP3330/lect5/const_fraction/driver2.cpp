#include <iostream>

#include "frac.h"

using namespace std;

int main() {
  const Fraction ZERO;
  // η συνάρτηση SetValue() δεν είναι const άρα δεν μπορεί να κληθεί
  // για το const αντικείμενο ZERO
  ZERO.SetValue(1,
                2);  // the object has type qualifiers that are not compatible
                     // with the member function "Fraction::SetValue" -- object
                     // type is: const Fraction

  return 0;
}