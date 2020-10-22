// C++11
#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 5> vals{42, 0, -7, 42, 11};
    std::sort(vals.begin(), vals.end());
    for (int i = 0; i < 5; i++)
    {
        std::cout << vals[i] << " ";
    }
}