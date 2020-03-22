#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main()
{
    Fraction f1(1, 2);
    Fraction f2(2, 4);

    if (Equals(f1, f2))
        cout << "The fractions are equal" << endl;

    Fraction f3 = Add(f1, f2);
    f3.Show();

    return 0;
}

/* Έξοδος
The fractions are equal
8/8
*/