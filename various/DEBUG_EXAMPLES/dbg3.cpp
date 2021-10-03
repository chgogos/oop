// εύρεση αθροίσματος στοιχείων πίνακα

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // ΑΡΧΗ: Αν ο ακόλουθος κώδικας βγει από σχόλια τότε το αποτέλεσμα που εμφανίζεται αλλάζει
    // int b[10] = {0};
    // for (int i = 0; i < 10; i++)
    //     cout << "b[" << i << "]=" << &b[i] << endl;
    // ΤΕΛΟΣ
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
        cout << "a[" << i << "]=" << &a[i] << endl;
    int sum = a[0];
    cout << "Variable sum is at memory position " << &sum << endl;
    cout << 0 << " " << a[0] << " " << &a[0] << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " " << a[i] << " " << &a[i] << endl;
        sum += a[i];
    }
    cout << sum << endl;
}