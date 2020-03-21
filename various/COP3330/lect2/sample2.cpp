#include <iostream>

class Fraction
{
public:
    void SetNumerator(int n);
    void SetDenominator(int d);
    double ToDecimal();

private:
    void PrintHello();
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
    PrintHello(); // ok, διότι καλείται μέσα από την κλάση
    return (double)numer / denom;
}

void Fraction::PrintHello()
{
    std::cout << "Hello!!!" << std::endl;
}

int main()
{
    Fraction F;

    // F.PrintHello(); // δεν γίνεται διότι η PrintHello είναι ιδιωτικό μέλος της κλάσης
    F.SetNumerator(1);
    F.SetDenominator(2);

    std::cout << "Decimal: " << F.ToDecimal() << std::endl;
    return 0;
}

/* Έξοδος: 
Decimal: Hello!!!
0.5
*/