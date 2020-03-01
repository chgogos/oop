// Υπερφόρτωση της συνάρτησης f

#include <iostream>

using namespace std;

void f(int x)
{
    cout << "I got an integer" << endl;
}

void f(double x)
{
    cout << "I got a double" << endl;
}

void f(int x, double y)
{
    cout << "I got an int and a double" << endl;
}

int main()
{
    f(1);         // I got an integer
    f(1.0);       //  I got a double
    f(1.0f);      //  I got a double
    f(double(1)); //  I got a double
    f(1, 2);      //  I got a int and a double
    f(1, 2.0);      //  I got a int and a double
    f(1.0, 2);      //  I got a int and a double (!!!)
}