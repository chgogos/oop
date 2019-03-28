// https://github.com/ericniebler/range-v3

#include <vector>
#include <range/v3/all.hpp>
#include <iostream>

int main()
{
    std::vector<int> v{3, 2, 1, 5, 4};
    ranges::sort(v);
    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}