// $ g++-13 hello5.cpp -std=c++20
// $ ./a.out
// $ Hello from C++

#include <iostream>
#include <format>

using namespace std;

int main()
{
const auto msg = std::format("Hello from {}", "C++");
cout << msg << endl;
}