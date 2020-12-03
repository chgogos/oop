#include <iostream>
#include <cstring>

template<class T>
T max(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main()
{
    int x1 = 5, x2 = 7, x3 = max(x1, x2);
    std::cout << x3 << std::endl;

    double y1 = 5.2, y2 = 7.5, y3 = max(y1, y2);
    std::cout << y3 << std::endl;
    return 0;
}

