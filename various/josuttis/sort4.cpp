// C++98
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> coll;
    coll.push_back(42);
    coll.push_back(0);
    coll.push_back(-7);
    coll.push_back(42);
    coll.push_back(11);
    std::sort(coll.begin(), coll.end());
    for (int i = 0; i < 5; i++)
    {
        std::cout << coll[i] << " ";
    }
}