#include <iostream>

long factorial(long n)
{
    static int c = 0;
    c++;
    if (n == 1)
    {
        std::cout << "function factorial called " << c << " times" << std::endl;
        return 1;
    }
    else
        return n * factorial(n - 1);
}

int main()
{
    std::cout << factorial(10) << std::endl;
}