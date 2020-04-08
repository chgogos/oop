#include <iostream>

using namespace std;

int main()
{
    int val = 5;
    int *valptr = &val;

    *valptr = 10;
    cout << "val = " << val << endl;
    cout << "&val = " << &val << endl;
    cout << "valptr = " << valptr << endl;
    cout << "*valptr = " << *valptr << endl;
    cout << "&valptr = " << &valptr << endl;
    return 0;
}

/*
val = 10
&val = 0x7ffee72826c8
valptr = 0x7ffee72826c8
*valptr = 10
&valptr = 0x7ffee72826c0
*/