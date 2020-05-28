#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> vct = {1, 2, 3, 4, 5};
    sort(vct.rbegin(), vct.rend());
    for (int a : vct)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}