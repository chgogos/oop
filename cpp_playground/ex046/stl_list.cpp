#include <iostream>
#include <list>

int main()
{
    std::list<int> alist{1, 2, 3, 4, 5, 6};
    alist.push_back(7);
    alist.push_front(0);

    for (auto x : alist)
    {
        std::cout << x << std::endl;
    }

    return 0;
}
