#include <iostream>
#include <iomanip>

template <typename T>
constexpr T pi = T(3.141519265358979); //C++14

int main()
{
    std::cout << std::setprecision(17);
    std::cout << pi<float> << std::endl;
    std::cout << pi<double> << std::endl;

    return 0;
}