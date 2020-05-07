#include <iostream>
#include <iomanip>

template <typename T>
constexpr T pi = T(3.141519265358979); //C++14 variable templates

int main()
{
    std::cout << std::setprecision(17);
    std::cout << pi<float> << std::endl;
    std::cout << pi<double> << std::endl;

    return 0;
}

/*
3.14151930809021
3.141519265358979
*/