#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // random iterator
    std::vector<int>::iterator itr1 = v.begin();
    while (itr1 != v.end())
    {
        (*itr1) -= 1;
        std::cout << *itr1 << " ";
        itr1++;
    }
    std::cout << std::endl;

    for (auto itr2 = v.begin(); itr2 != v.end(); itr2++)
    {
        std::cout << *itr2 << " ";
    }
    std::cout << std::endl;

    for (auto itr2 = v.rbegin(); itr2 != v.rend(); itr2++)
    {
        std::cout << *itr2 << " ";
    }
    std::cout << std::endl;


    itr1 = v.begin();
    std::cout << v[4] << " " << *(itr1 + 4) << std::endl;

    return 0;
}
