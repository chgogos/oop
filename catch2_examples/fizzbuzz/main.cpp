#include <iostream>
#include "fizzbuzz.hpp"

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::cout << fizzBuzz(i) << std::endl;
    }
}