#include <iostream>
#include <complex>

int main()
{

    auto double_f = [](auto x) { return x + x; }; // C++14 (generic lambda, uses auto parameter)

    std::cout << double_f(2) << std::endl;
    std::cout << double_f(2.6) << std::endl;
    std::cout << double_f(2.7f) << std::endl;
    std::cout << double_f(std::complex<double>(2.0, 3.0)) << std::endl;

    return 0;
}
