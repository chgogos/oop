#include <iostream>

class Fraction
{
public:
    Fraction();             // προκαθορισμένος κατασκευαστής
    Fraction(int n);        // κατασκευαστής με 1 παράμετρο
    Fraction(int n, int d); // κατασκευαστής με 2 παραμέτρους
    void SetNumerator(int n);
    void SetDenominator(int d);
    double ToDecimal();

private:
    int numer;
    int denom;
};

Fraction::Fraction()
{
    numer = 0;
    denom = 1;
}

Fraction::Fraction(int n)
{
    numer = n;
    denom = 1;
}

Fraction::Fraction(int n, int d)
{
    numer = n;
    denom = d;
}

void Fraction::SetNumerator(int n)
{
    numer = n;
}

void Fraction::SetDenominator(int d)
{
    if (d != 0)
        denom = d;
    else
        denom = 1;
}

double Fraction::ToDecimal()
{
    return (double)numer / denom;
}

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

/* έξοδος
Decimal: 0.5
Decimal: 0
Decimal: 10
Decimal: 0.5
*/