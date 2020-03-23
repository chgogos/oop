//--------------- FRAC.CPP ---------------
// Ο ορισμός της κλάσης για τα κλάσματα
//

#include <iostream>
#include "frac.h"

using namespace std;

// φίλες συναρτήσεις

bool Equals(const Fraction &x, const Fraction &y)
{
    return (x.numerator * y.denominator == y.numerator * x.denominator);
}

Fraction Add(const Fraction &x, const Fraction &y)
{
    int num = x.numerator * y.denominator + y.numerator * x.denominator;
    int denom = x.denominator * y.denominator;

    Fraction answer(num, denom); // δημιουργία του answer Fraction
    return answer;
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
    if (SetValue(n, d) == false)
        SetValue(0, 1);
}

void Fraction::Input()
// Λήψη ενός κλάσματος από την τυπική είσοδο, στη μορφή "αριθμητής/παρονομαστής"
// έλεγχος επαλήθευσης εισόδου
{
    char divSign; // used to consume the '/' character during input

    do
    {
        cin >> numerator >> divSign >> denominator;
        if (denominator == 0)
            cout << "Bad Fraction.  Try again: ";

    } while (denominator == 0);
}

void Fraction::Show() const
// Απεικόνιση ενός κλάσματος, στη μορφή "αριθμητής/παρονομαστής"
{
    cout << numerator << '/' << denominator;
}

int Fraction::GetNumerator() const
{
    return numerator;
}

int Fraction::GetDenominator() const
{
    return denominator;
}

bool Fraction::SetValue(int n, int d)
// ορισμός ενός Fraction σε n/d (εκτός και εάν το d είναι 0)
// επιστρέφει true για επιτυχία και false για αποτυχία
{
    if (d == 0)
        return false;
    else
    {
        numerator = n;
        denominator = d;
        return true;
    }
}

double Fraction::Evaluate() const
// Υπολογισμός και επιστροφή της δεκαδικής τιμής ενός κλάσματος
{
    double n = numerator;   // μετατροπή αριθμητή σε double
    double d = denominator; // μετατροπή παρονομαστή σε double
    return (n / d);         // υπολογσιμός και επιστροφή της αναπαράστασης ως αριθμό κινητής υποδιαστολής
}
