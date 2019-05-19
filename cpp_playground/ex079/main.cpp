#include <iostream>
#include "money.hpp"

int main()
{
    money amt1;              // amt1=0.00 EUR
    amt1 = 100;              // amt1=1.00 EUR
    money amt2(2000, "EUR"); // amt2=20.00 EUR
    money amt3(amt2);        // amt3=20.00 EUR

    amt1 = amt1 * 5;    // amt1=5.00 EUR
    amt3 = amt3 - amt1; // amt3=15.00 EUR

    std::cout << amt1 << std::endl;
    std::cout << amt2 << std::endl;
    std::cout << amt3 << std::endl;
}