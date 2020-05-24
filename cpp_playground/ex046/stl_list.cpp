#include <iostream>
#include <list>

int main()
{
    std::list<int> alist{1, 2, 3, 4, 5, 6};
    alist.push_back(7);
    alist.push_front(0);

    for (auto &x : alist)
        std::cout << x << " ";
    std::cout << std::endl;

    alist.assign({2, 3, 1, 7, 8});
    alist.sort();
    alist.pop_front();
    alist.pop_back();
    alist.reverse();
    for (auto &x : alist)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}

/*
0 1 2 3 4 5 6 7 
7 3 2
*/