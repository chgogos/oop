#include <iostream>
#include <list>

int main()
{
    std::list<int> alist{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // forward iterator
    std::list<int>::iterator itr1 = alist.begin();
    while (itr1 != alist.end())
    {
        (*itr1) -= 1;
        std::cout << *itr1 << " ";
        itr1++;
    }
    std::cout << std::endl;

    for (auto itr2 = alist.begin(); itr2 != alist.end(); itr2++)
    {
        std::cout << *itr2 << " ";
    }
    std::cout << std::endl;

    for (auto itr2 = alist.rbegin(); itr2 != alist.rend(); itr2++)
    {
        std::cout << *itr2 << " ";
    }
    std::cout << std::endl;

    return 0;
}
