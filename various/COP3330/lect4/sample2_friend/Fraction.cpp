#include "Fraction.hpp"
#include <iostream>

using namespace std;

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

int Fraction::GetNumerator()
{
    return numer;
}

int Fraction::GetDenominator()
{
    return denom;
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

void Fraction::Show()
{
    cout << numer << '/' << denom << endl;
}

// Friend functions

bool Equals(Fraction x, Fraction y)
{
    if (x.numer * y.denom == y.numer * x.denom)
        return true;
    else
        return false;
}

Fraction Add(Fraction x, Fraction y)
{
    int num = x.numer * y.denom + y.numer * x.denom;
    int denom = x.denom * y.denom;

    Fraction answer(num, denom); // δημιουργία του αντικειμένου απάντηση Fraction
    return answer;

    // εναλλακτικά για τις 2 παραπάνω γραμμές
    // return Fraction(num, denom);	// κατασκευή Fraction και επιστροφή
}