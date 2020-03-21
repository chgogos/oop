#include <iostream>
#include "Fraction.hpp"

int main()
{
    Fraction F;

    F.SetNumerator(1);
    F.SetDenominator(2);

    std::cout << "Decimal: " << F.ToDecimal() << std::endl;

    Fraction A;
    std::cout << "Decimal: " << A.ToDecimal() << std::endl;

    Fraction B(10);
    std::cout << "Decimal: " << B.ToDecimal() << std::endl;

    Fraction C(10, 20);
    std::cout << "Decimal: " << C.ToDecimal() << std::endl;

    return 0;
}

/* Έξοδος
Decimal: 0.5
Decimal: 0
Decimal: 10
Decimal: 0.5
*/