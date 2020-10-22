// C++20 ranges
#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array vals{42, 0, -7, 42, 11};
    std::ranges::sort(vals);
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << vals[i] << " ";
    }
}