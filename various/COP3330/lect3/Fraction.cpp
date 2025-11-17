#include "Fraction.hpp"

Fraction::Fraction() {
  numer = 0;
  denom = 1;
}

Fraction::Fraction(int n) {
  numer = n;
  denom = 1;
}

Fraction::Fraction(int n, int d) {
  numer = n;
  denom = d;
}

void Fraction::SetNumerator(int n) { numer = n; }

void Fraction::SetDenominator(int d) {
  if (d != 0)
    denom = d;
  else
    denom = 1;
}

double Fraction::ToDecimal() { return (double)numer / denom; }
