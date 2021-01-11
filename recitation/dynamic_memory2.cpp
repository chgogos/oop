#include <iostream>

using namespace std;

int main()
{
    int *a;
    double *b;
    char *c;

    a = new int;
    b = new double;
    c = new char;

    *a = 42;
    *b = 3.14;
    *c = 'a';

    cout << *a << endl;
    cout << *b << endl;
    cout << *c << endl;

    delete a;
    delete b;
    delete c;
}

/*
42
3.14
a
*/