//--------------- FRAC.CPP ---------------
// Ο ορισμός της κλάσης για τα κλάσματα

#include "frac.h"

#include <iostream>

using namespace std;

Fraction operator+(const Fraction& f1, const Fraction& f2) {
  Fraction r;
  r.numerator =
      (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
  r.denominator = f1.denominator * f2.denominator;
  return r;
}

bool operator==(const Fraction& f1, const Fraction& f2) {
  return (f1.numerator * f2.denominator == f2.numerator * f1.denominator);
}

ostream& operator<<(ostream& os, const Fraction& f) {
  os << f.numerator << '/' << f.denominator;
  return os;
}

istream& operator>>(istream& is, Fraction& f) {
  char slash;
  is >> f.numerator >> slash >> f.denominator;
  return is;
}

// συναρτήσεις μέλη

Fraction::Fraction()
// Προκαθορισμένος κατασκευαστής.  Ατρχικοποίηση του κλάσματος σε 0/1
{
  numerator = 0;
  denominator = 1;
}

Fraction::Fraction(int n, int d)
// αρχικοποίηση του κλάσματος σε n/d
// έλεγχος επαλήθευσης εισόδου
{
  if (SetValue(n, d) == false) SetValue(0, 1);
}

void Fraction::Input()
// Λήψη ενός κλάσματος από την τυπική είσοδο, στη μορφή "αριθμητής/παρονομαστής"
// έλεγχος επαλήθευσης εισόδου
{
  char divSign;  // used to consume the '/' character during input

  do {
    cin >> numerator >> divSign >> denominator;
    if (denominator == 0) cout << "Bad Fraction.  Try again: ";

  } while (denominator == 0);
}

void Fraction::Show() const
// Απεικόνιση ενός κλάσματος, στη μορφή "αριθμητής/παρονομαστής"
{
  cout << numerator << '/' << denominator;
}

int Fraction::GetNumerator() const { return numerator; }

int Fraction::GetDenominator() const { return denominator; }

bool Fraction::SetValue(int n, int d)
// ορισμός ενός Fraction σε n/d (εκτός και εάν το d είναι 0)
// επιστρέφει true για επιτυχία και false για αποτυχία
{
  if (d == 0)
    return false;
  else {
    numerator = n;
    denominator = d;
    return true;
  }
}

double Fraction::Evaluate() const
// Υπολογισμός και επιστροφή της δεκαδικής τιμής ενός κλάσματος
{
  double n = numerator;    // μετατροπή αριθμητή σε double
  double d = denominator;  // μετατροπή παρονομαστή σε double
  return (n / d);  // υπολογσιμός και επιστροφή της αναπαράστασης ως αριθμό
                   // κινητής υποδιαστολής
}
