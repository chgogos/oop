#include <iostream>
#include <algorithm>

class double_unary_functor
{
public:
    int operator()(int x) { return x * 2; }
};

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    std::transform(std::begin(a), std::end(a), std::begin(a), double_unary_functor());
    for (int x : a)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}