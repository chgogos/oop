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

/*
x: address=0x7ffeeea0b42c value=5 sizeof=4
px: address=0x7ffeeea0b420 value=0x7ffeeea0b42c points to value=5 sizeof=8
x: address=0x7ffeeea0b42c value=10 sizeof=4
px: address=0x7ffeeea0b420 value=0x7ffeeea0b42c points to value=10 sizeof=8
*/
