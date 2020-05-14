#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

std::string convert_long_double_to_string(const long double long_double_value, const int precision)
{
    std::stringstream os;
    os << std::fixed << std::setprecision(precision) << long_double_value;
    return os.str();
}

int main()
{
    int x = 42;
    std::cout << std::to_string(x) << std::endl;

    long double y = 1.1234567890;
    // εμφανίζονται μόνο 6 δεκαδικά ψηφία της τιμής y
    std::cout << std::to_string(y) << std::endl;

    // εμφανίζονται όλα τα δεκαδικά ψηφία του y
    std::cout << convert_long_double_to_string(y, 10) << std::endl;

    return 0;
}

/*
42
1.123457
1.1234567890
*/