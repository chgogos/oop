#include <iostream>
#include "numbers.hpp"

using namespace std;

int main()
{
    int a= 30, b=12;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a,b) << endl;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a,b) << endl;

}