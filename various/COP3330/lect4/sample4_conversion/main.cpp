#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main()
{
    // ρητές κλήσεις κατασκευαστών
    Fraction f1; // κλήση του κατασκευαστή Fraction()
    f1.Show();
    Fraction f2(2); // κλήση του κατασκευαστή Fraction(int, int)
    f2.Show();
    Fraction f3(3, 4); // κλήση του κατασκευαστή Fraction(int, int)
    f3.Show();

    // υπονοούμενη κλήση κατασκευαστή
    f1 = 4;  // κλήση του κατασκευαστή Fraction(int, int)
    f1.Show(); 

    
    return 0;
}

/* Έξοδος

*/