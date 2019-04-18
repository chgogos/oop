#include <iostream>
#include <algorithm>

class is_odd
{
public:
    bool operator()(int x) { return x % 2 == 0; }
};

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[5];
    std::transform(std::begin(a), std::end(a), std::begin(b), is_odd());
    for (int x : b)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}