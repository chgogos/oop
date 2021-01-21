// Δημιουργήστε ένα enumeration με τιμές ΟΝ και OFF. 
// Γράψτε ένα πρόγραμμα που να ορίζει έναν πίνακα με 5 τιμές ΟΝ ή OFF. 
// Μετρήστε πόσα είναι τα ON και εμφανίστε το αποτέλεσμα.

#include <iostream>

using namespace std;

enum class state
{
    ON,
    OFF
};

int main()
{
    state a[5] = {state::ON, state::OFF, state::ON, state::ON, state::ON};

    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == state::ON)
        {
            c++;
        }
    }

    cout << c << endl;
}

/*
4
*/