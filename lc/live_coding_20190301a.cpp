#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{3, 5, 7};

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    v.push_back(99);

    // range based for
    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
