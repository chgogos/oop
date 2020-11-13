// Παράδειγμα με υπερχείλιση της στοίβας
// Αν η μεταβλητή counter λάβει την τιμή 100 ο κώδικας λειτουργεί, 
// ενώ αν λάβει την τιμή 100000 ο κώδικας παύει να λειτουργεί 
// λόγω εξάντλησης του διαθέσιμου χώρου της stack memory

#include <iostream>
using namespace std;

// int counter = 100;  // ok
int counter = 100000; // stack overflow

void countdown()
{
    if (counter == 0)
        return;
    else
    {
        counter--;
        cout << counter << endl;
        countdown();
    }
}

int main()
{
    countdown();
}

/*
...
56834
56833
56832
CRASH!!!!!
*/