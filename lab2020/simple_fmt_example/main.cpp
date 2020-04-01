/*
g++ main.cpp ../fmt/format.cc -o main -std=c++11
*/

#include <string>
#include "../fmt/format.h"

int main()
{
    fmt::print("Hello, {}!", "world");  // Python-like format string syntax
    std::string s1 = fmt::format("I'd rather be {1} than {0}.", "right", "happy");
    fmt::print(s1);
    auto s2 = fmt::format("The answer is {}", 42);
    fmt::print(s2);
}