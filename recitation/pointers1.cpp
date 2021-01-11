#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int *x = &a, *y = &b;

    *x = 42;
    *y = 52;
    a++;
    b -= 2;
    *x += a;
    y = &c;
    *y = *x + b;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << *x << endl;
    cout << *y << endl;
    cout << (x == &a) << endl;
    cout << (x == &b) << endl;
    cout << (x == &c) << endl;
}

/*
86
50
136
86
136
1
0
0
*/