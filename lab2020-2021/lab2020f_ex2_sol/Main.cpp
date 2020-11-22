#include <iostream>
#include "Complex.hpp"

using namespace std;

int main()
{
    Complex c1(5, 3);

    cout << "Example of operator<<" << endl;
    cout << c1 << endl;

    cout << "Conjugate" << endl;
    cout << c1.conj() << endl;
    
    cout << "Magnitude" << endl;
    cout << c1.abs() << endl;

    Complex c2(2, -4);

    cout << "Example of operator+" << endl;
    Complex r = c1 + c2;
    cout << r << endl;

    cout << "Example of operator-" << endl;
    r = c1 - c2;
    cout << r << endl;

    cout << "Example of operator*" << endl;
    r = c1 * c2;
    cout << r << endl;

    cout << "Example of operator/" << endl;
    r = c1 / c2;
    cout << r << endl;

    cout << "Example of operator==" << endl;
    Complex c3(5,3);
    cout << (c2 == c3?"EQUAL":"NOT EQUAL") << endl;

    cout << "Example of operator!=" << endl;
    cout << (c2 != c3?"EQUAL":"NOT EQUAL") << endl;

    cout << "Example of raising a complex number to a positive integer power" << endl;
    Complex c4(2,3);
    c4 = c4.raiseTo(5);
    cout << c4 << endl;

    cout << "Example of raising a complex number to a negative integer power" << endl;
    Complex c5(2,3);
    c5 = c5.raiseTo(-5);
    cout << c5 << endl;

}
