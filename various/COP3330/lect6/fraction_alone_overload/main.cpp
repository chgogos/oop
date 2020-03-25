//--------------- MAIN.CPP ---------------
// Πρόγραμμα οδηγός για τον έλεγχο της κλάσης Fraction

#include <iostream>
#include "frac.h"

using namespace std;

int main()
{
    // Δοκιμή των διαθέσιμων κατασκευαστών
    // και των συναρτήσεων εισόδου εξόδου

    // Οι ακόλουθες δηλώσεις χρησιμοποιούν τον προκαθορισμένο κατασκευαστή
    Fraction f1, f2;

    // Οι ακόλουθες δηλώσεις χρησιμοποιύν τον κατασκευαστή με παραμέτρους
    Fraction f3(3, 4), f4(6);

    // Αυτόματη μετατροπή (int -> Fraction)
    cout << "Attempting arithmetic calls\n";
    f2 = f1 + 5;
    cout << "Second arithmetic call\n";
    f4 = Fraction(2) + f3;

    cout << "\nThe fraction f1 is ";
    f1.Show();

    cout << "\nThe fraction f2 is ";
    f2.Show();

    cout << "\nThe fraction f3 is ";
    f3.Show();

    cout << "\nThe fraction f4 is ";
    f4.Show();

    cout << "\nNow enter first fraction: ";
    f1.Input();
    cout << "\nYou entered ";
    f1.Show();

    cout << "\nNow enter second fraction: ";
    f2.Input();
    cout << "\nYou entered ";
    f2.Show();

    cout << "\nThe sum of the first and second fraction is ";
    Fraction result;
    result = f1 + f2;
    result.Show();
    cout << '\n';

    cout << "\n The value of fraction 1 is " << f1.Evaluate() << '\n';
    cout << "\n The value of fraction 2 is " << f2.Evaluate() << '\n';

    cout << "Goodbye!\n";
    return 0;
}