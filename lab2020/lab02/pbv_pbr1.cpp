#include <iostream>
using namespace std;

// κλήση με τιμή (pass by value)
void funv(int a)
{
    a++;
}

// κλήση με αναφορά (pass by reference)
void funr(int &a)
{
    a++;
}

// κλήση με αναφορά χρησιμοποιώντας δείκτη
void funp(int *a)
{
    (*a)++;
}

int main()
{
    int x = 0;
    funv(x);
    cout << x << endl; // 0

    funr(x);
    cout << x << endl; // 1

    funp(&x);
    cout << x << endl; // 2

    int *y = new int(100);
    funp(y);
    cout << *y << endl; // 101
    delete y;
}