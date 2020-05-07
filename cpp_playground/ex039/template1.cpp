#include <iostream>
#include <cstring>

template <class T>
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

//template specialization
template <>
char *max<char *>(char *a, char *b)
{
    if (strcmp(a, b) > 0)
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

    double x4 = 3.4, x5 = 1.2, x6 = max(x4, x5);
    std::cout << x6 << std::endl;

    // https://en.cppreference.com/w/c/experimental/dynamic/strdup
    char *x7 = strdup("BBBBBB"), *x8 = strdup("AAAAAA"), *x9 = max<char*>(x7, x8);
    std::cout << x9 << std::endl;

    delete x7;
    delete x8;

    return 0;
}

/*
7
3.4
BBBBBB
*/