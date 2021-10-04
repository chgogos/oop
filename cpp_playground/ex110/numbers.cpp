#include "numbers.hpp"

int gcd(int x, int y)
{
    int a, b, r;
    if (x > y)
    {
        a = x;
        b = y;
    }
    else
    {
        a = y;
        b = x;
    }
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// x * y = LCM(x, y) * GCD (x, y)
int lcm(int x, int y)
{
    return x * y / gcd(x, y);
}