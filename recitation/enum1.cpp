// Δημιουργήστε ένα enumeration με τιμές ΟΝ και OFF. 
// Γράψτε ένα πρόγραμμα που να ορίζει έναν πίνακα με 5 τιμές ΟΝ ή OFF. 
// Μετρήστε πόσα είναι τα ON και εμφανίστε το αποτέλεσμα.

#include <iostream>

using namespace std;

enum state
{
    ON,
    OFF
};

int main()
{
    state a[5] = {ON, OFF, ON, ON, ON};

    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == ON)
        {
            c++;
        }
    }

    cout << c << endl;
}

/*
4
*/