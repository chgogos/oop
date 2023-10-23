#include "fizzbuzz.hpp"

// έκδοση 1 (αποτυχία)
// std::string fizzBuzz(int n)
// {
//     return "";
// }

// έκδοση 2 (αποτυχία)
// std::string fizzBuzz(int n)
// {
//     return std::to_string(n);
// }

// έκδοση 3 (αποτυχία)
// std::string fizzBuzz(int n)
// {
//     if (n % 3 == 0)
//         return "Fizz";
//     else if (n % 5 == 0)
//         return "Buzz";
//     else if (n % 3 ==0 && n % 5 == 0)
//         return "FizzBuzz";
//     else
//         return std::to_string(n);
// }

// έκδοση 4 (επιτυχία)
std::string fizzBuzz(int n)
{
    if (n % 3 ==0 && n % 5 == 0)
        return "FizzBuzz";
    else if (n % 3 == 0)
        return "Fizz";
    else if (n % 5 == 0)
        return "Buzz";
    else
        return std::to_string(n);
}