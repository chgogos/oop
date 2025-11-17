#include <iostream>

#include "Fraction.hpp"

using namespace std;

bool Equals(Fraction x, Fraction y) {
  if (x.numer * y.denom == y.numer * x.denom)
    return true;
  else
    return false;
}

int main() {
  Fraction f1(1, 2);
  Fraction f2(2, 4);

  if (Equals(f1, f2)) cout << "The fractions are equal" << endl;

  return 0;
}

/* Compile error
$ g++ Fraction.cpp main2.cpp -o main
main2.cpp: In function 'bool Equals(Fraction, Fraction)':
main2.cpp:8:11: error: 'int Fraction::numer' is private within this context
     if (x.numer * y.denom == y.numer * x.denom)
           ^~~~~
In file included from main2.cpp:2:
Fraction.hpp:14:9: note: declared private here
     int numer;
         ^~~~~
main2.cpp:8:21: error: 'int Fraction::denom' is private within this context
     if (x.numer * y.denom == y.numer * x.denom)
                     ^~~~~
In file included from main2.cpp:2:
Fraction.hpp:15:9: note: declared private here
     int denom;
         ^~~~~
main2.cpp:8:32: error: 'int Fraction::numer' is private within this context
     if (x.numer * y.denom == y.numer * x.denom)
                                ^~~~~
In file included from main2.cpp:2:
Fraction.hpp:14:9: note: declared private here
     int numer;
         ^~~~~
main2.cpp:8:42: error: 'int Fraction::denom' is private within this context
     if (x.numer * y.denom == y.numer * x.denom)
                                          ^~~~~
In file included from main2.cpp:2:
Fraction.hpp:15:9: note: declared private here
     int denom;
         ^~~~~
*/