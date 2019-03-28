#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int a[]{34, 45, 23, 17, 42};
    std::reverse(std::begin(a), std::end(a));
    std::cout << "Reversed array:" << std::endl;
    for (int x : a)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::vector<int> v{34, 45, 23, 17, 42};
    std::reverse(std::begin(v), std::end(v));
    std::cout << "Reversed vector:" << std::endl;
    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}