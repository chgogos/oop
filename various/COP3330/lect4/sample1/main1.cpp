#include <iostream>
#include "Fraction.hpp"

using namespace std;

bool Equals(Fraction x, Fraction y)
{
    if (x.GetNumerator() * y.GetDenominator() == y.GetNumerator() * x.GetDenominator())
        return true;
    else
        return false;
}

int main()
{
    Fraction f1(1, 2);
    Fraction f2(2, 4);

    if (Equals(f1, f2))
        cout << "The fractions are equal" << endl;

    return 0;
}

/* Έξοδος
The fractions are equal
*/