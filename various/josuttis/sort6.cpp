// C++11 Initializer lists
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> coll{42, 0, -7, 42, 11};
    std::sort(coll.begin(), coll.end());
    for (int i = 0; i < 5; i++)
    {
        std::cout << coll[i] << " ";
    }
}