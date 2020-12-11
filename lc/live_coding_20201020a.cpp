#include <iostream>

using namespace std;

void fun1(int a, int b, int sum, int prod) // κλήση με τιμή
{
    sum = a + b;
    prod = a * b;
}

void fun2(int a, int b, int *sum, int *prod) // κλήση με αναφορά (με χρήση δεικτών, C ή C++)
{
    *sum = a + b;
    *prod = a * b;
}

void fun3(int a, int b, int &sum, int &prod) // κλήση με αναφορά (με χρήση αναφορών, C++)
{
    sum = a + b;
    prod = a * b;
}

int main()
{
    int x = 5, y = 10, z = 0, w = 0;
    // fun1(x, y, z, w); // z=0, w=0
    // fun2(x, y, &z, &w); // z=15 w=50
    fun3(x, y, z, w); // z=15 w=50
    cout << "z=" << z << " w=" << w << endl;
}