// πράξεις που δεν είναι ακριβείς με floating point τύπους

#include <iomanip>
#include <iostream>
#include <cassert>

int main()
{
    double sum = 0.0;
    double x = 0.3;
    for (int i = 0; i < 10; i++)
    {
        sum += x;
    }
    std::cout << std::fixed << std::setprecision(17) << sum << std::endl;
    std::cout << std::fixed << std::setprecision(17) << 3.0 << std::endl;
    assert(sum == 3.0);
}

/*
2.99999999999999956
3.00000000000000000
Assertion failed: sum==3.0, file floating_point.cpp, line 15
*/