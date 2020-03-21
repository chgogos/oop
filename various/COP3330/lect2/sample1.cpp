#include <iostream>

class Fraction
{
public:
    void SetNumerator(int n);
    void SetDenominator(int d);
    double ToDecimal();

private:
    int numer;
    int denom;
};

void Fraction::SetNumerator(int n)
{
    numer = n; // παρατηρήστε ότι προσπελαύνουμε το ιδιωτικό μέλος numer εδώ
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

    // F.numer = 1; // δεν γίνεται διότι το numer είναι ιδιωτικό μέλος της κλάσης
    F.SetNumerator(1);
    F.SetDenominator(2);

    std::cout << "Decimal: " << F.ToDecimal() << std::endl;
    return 0;
}

/* Έξοδος: 
Decimal: 0.5
*/