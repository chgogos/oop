#include <iostream>

int main()
{
    int x = 5;
    int *px = &x;
    std::cout << "x: address=" << &x << " value=" << x << " sizeof=" << sizeof(x) << std::endl;
    std::cout << "px: address=" << &px << " value=" << px << " points to value=" << *px << " sizeof=" << sizeof(px) << std::endl;

    *px = 10;
    std::cout << "x: address=" << &x << " value=" << x << " sizeof=" << sizeof(x) << std::endl;
    std::cout << "px: address=" << &px << " value=" << px << " points to value=" << *px << " sizeof=" << sizeof(px) << std::endl;

}