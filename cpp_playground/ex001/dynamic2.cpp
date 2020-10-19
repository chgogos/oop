#include <iostream>
#include <cstdlib>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    std::cout << "static array=" << sizeof(a) << std::endl;
    int x;
    std::cin >> x;
    int *p = (int *)malloc(sizeof(int) * x);
    std::cout << "dynamic array=" << sizeof(p) << std::endl;
    free(p);
}

/*
static array=20
1
dynamic array=8
*/