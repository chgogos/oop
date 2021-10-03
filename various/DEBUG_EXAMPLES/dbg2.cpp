// εύρεση αθροίσματος στοιχείων πίνακα

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = a[0];
    for (int i = 1; i <= 10; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}

/*
65
ΠΙΘΑΝΟ ΛΑΘΟΣ ΑΠΟΤΕΛΕΣΜΑ, ΤΟ ΣΩΣΤΟ ΕΙΝΑΙ 55
*/