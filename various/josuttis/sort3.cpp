// C++98
#include <iostream>
#include <algorithm>

int main()
{
    int vals[] = {42, 0, -7, 42, 11};
    std::sort(vals, vals + 5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << vals[i] << " ";
    }
}