#include <iostream>

using namespace std;

// κλάση χωρίς default constructor
class B
{
    int i;

public:
    B(int i) : i(i) {}
};

class A
{
    int x;
    const int y; // τα const μέλη πρέπει να αρχικοποιούνται στο initializer list (ή μαζί με τη δήλωσή τους)
    int &z;      // τα μέλη που είναι αναφορές πρέπει να αρχικοποιούνται στο initializer list
    B b;         // τα μέλη που είναι αντικείμενα κλάσης χωρίς default κατασκευαστή πρέπει να αρχικοποιούνται στο initializer list

public:
    A(int x, int y, int z, int w) : x(x), y(y), z(z), b(w)
    {
    }

    // εναλλακτικά
    // A(int x, int y, int z, int w) : y(y), z(z), b(w)
    // {
    //     this->x = x;
    // }
};
