#include <iostream>
#include <limits>

constexpr auto SHORT_LOWER_BOUND = std::numeric_limits<short>::min();
constexpr auto SHORT_UPPER_BOUND = std::numeric_limits<short>::max();
constexpr auto INT_LOWER_BOUND = std::numeric_limits<int>::min();
constexpr auto INT_UPPER_BOUND = std::numeric_limits<int>::max();
constexpr auto LONG_LOWER_BOUND = std::numeric_limits<long>::min();
constexpr auto LONG_LONG_UPPER_BOUND = std::numeric_limits<long long>::max();
constexpr auto LONG_LONG_LOWER_BOUND = std::numeric_limits<long long>::min();
constexpr auto LONG_UPPER_BOUND = std::numeric_limits<long>::max();
constexpr auto FLOAT_LOWER_BOUND = std::numeric_limits<float>::min();
constexpr auto FLOAT_UPPER_BOUND = std::numeric_limits<float>::max();
constexpr auto DOUBLE_LOWER_BOUND = std::numeric_limits<double>::min();
constexpr auto DOUBLE_UPPER_BOUND = std::numeric_limits<double>::max();
constexpr auto LONG_DOUBLE_LOWER_BOUND = std::numeric_limits<long double>::min();
constexpr auto LONG_DOUBLE_UPPER_BOUND = std::numeric_limits<long double>::max();

int main()
{
    std::cout << "Minimum short " << SHORT_LOWER_BOUND << std::endl;
    std::cout << "Maximum short " << SHORT_UPPER_BOUND << std::endl;
    std::cout << "Minimum int " << INT_LOWER_BOUND << std::endl;
    std::cout << "Maximum int " << INT_UPPER_BOUND << std::endl;
    std::cout << "Minimum long " << LONG_LOWER_BOUND << std::endl;
    std::cout << "Maximum long " << LONG_UPPER_BOUND << std::endl;
    std::cout << "Minimum long long " << LONG_LONG_LOWER_BOUND << std::endl;
    std::cout << "Maximum long long " << LONG_LONG_UPPER_BOUND << std::endl;
    std::cout << "Minimum float " << FLOAT_LOWER_BOUND << std::endl;
    std::cout << "Maximum float " << FLOAT_UPPER_BOUND << std::endl;
    std::cout << "Minimum double " << DOUBLE_LOWER_BOUND << std::endl;
    std::cout << "Maximum double " << DOUBLE_UPPER_BOUND << std::endl;
    std::cout << "Minimum long double " << LONG_DOUBLE_LOWER_BOUND << std::endl;
    std::cout << "Maximum long double " << LONG_DOUBLE_UPPER_BOUND << std::endl;

    return 0;
}