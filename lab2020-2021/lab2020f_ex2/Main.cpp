#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex c1(5, 3), c2(2, -4);
    Complex r = c1 + c2;

    cout << c1 << endl;
    cout << c2 << endl;
    cout << r << endl;
}