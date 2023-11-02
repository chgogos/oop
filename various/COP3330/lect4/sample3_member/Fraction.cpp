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

void Fraction::Show()
{
    cout << numer << '/' << denom << endl;
}

bool Fraction::Equals(Fraction other)
{
    if (this->numer * other.denom == other.numer * this->denom)
        return true;
    else
        return false;
}

Fraction Fraction::Add(Fraction other)
{
    int n = numer * other.denom + other.numer * denom;
    int d = denom * other.denom;
    return Fraction(n, d);
}

void Fraction::Input()
// Λήψη ενός κλάσματος από την προκαθορισμένη είσοδο, στη μορφή "αριθμητής/παρονομαστής"
// Γίνεται έλεγχος ορθής εισαγωγής τιμών
{
    char divSign; // χρησιμοποιείται για να καταναλώσει τον χαρακτήρα '/' κατά την είσοδο

    do
    {
        cin >> numer >> divSign >> denom;
        if (denom == 0)
            cout << "Bad Fraction.  Try again: ";

    } while (denom == 0);
}

bool Fraction::SetValue(int n, int d)
// Ορισμός του Fraction σε n/d (εκτός και εάν το d είναι 0)
// επιστρέφει true για επιτυχία και false για αποτυχία
{
    if (d == 0)
        return false;
    else
    {
        numer = n;
        denom = d;
        return true;
    }
}

double Fraction::Evaluate()
// Υπολογίζει και επιστρέφει τη δεκαδική τιμή του κλάσματος
{
    double n = numer;
    double d = denom;
    return (n / d);
}
