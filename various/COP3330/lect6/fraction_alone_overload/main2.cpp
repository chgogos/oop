//--------------- MAIN.CPP ---------------
// Πρόγραμμα οδηγός για τον έλεγχο της κλάσης Fraction

#include <iostream>

#include "frac.h"

using namespace std;

int main() {
  // Δοκιμή των διαθέσιμων κατασκευαστών
  // και των συναρτήσεων εισόδου εξόδου

  // Οι ακόλουθες δηλώσεις χρησιμοποιούν τον προκαθορισμένο κατασκευαστή
  Fraction f1, f2;

  // Οι ακόλουθες δηλώσεις χρησιμοποιύν τον κατασκευαστή με παραμέτρους
  Fraction f3(3, 4), f4(6);

  // Αυτόματη μετατροπή (int -> Fraction)
  cout << "Attempting arithmetic calls";
  f2 = f1 + 5;
  cout << "\nSecond arithmetic call";
  f4 = Fraction(2) + f3;

  cout << "\nThe fraction f1 is ";
  cout << f1;

  cout << "\nThe fraction f2 is ";
  cout << f2;

  cout << "\nThe fraction f3 is ";
  cout << f3;

  cout << "\nThe fraction f4 is ";
  cout << f4;

  cout << "\nNow enter first fraction: ";
  cin >> f1;
  cout << "You entered ";
  cout << f1;

  cout << "\nNow enter second fraction: ";
  cin >> f2;
  cout << "You entered ";
  cout << f2;

  cout << "\nThe sum of the first and second fraction is ";
  Fraction result;
  result = f1 + f2;
  cout << result;

  cout << "\nThe value of fraction 1 is " << f1.Evaluate();
  cout << "\nThe value of fraction 2 is " << f2.Evaluate() << '\n';

  return 0;
}

/* Έξοδος
Attempting arithmetic calls
Second arithmetic call
The fraction f1 is 0/1
The fraction f2 is 5/1
The fraction f3 is 3/4
The fraction f4 is 11/4
Now enter first fraction: 1/2
You entered 1/2
Now enter second fraction: 3/4
You entered 3/4
The sum of the first and second fraction is 10/8
The value of fraction 1 is 0.5
The value of fraction 2 is 0.75
*/