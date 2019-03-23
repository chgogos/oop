#include <iostream>
#include <cmath>

void test1()
{
    double sum = 0.0;
    for (int i = 0; i < 1000000; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            double x = i + 0.1;
            sum += sqrt(x);
        }
    }
    std::cout << sum << std::endl;
}

int main()
{
    test1();
    return 0;
}