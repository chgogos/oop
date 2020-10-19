#include <iostream>

int main()
{
    int x = 5;
    int *px = &x;
    std::cout << "x: address=" << &x << " value=" << x << " sizeof(x)=" << sizeof(x) << std::endl;
    std::cout << "px: address=" << &px << " value=" << px << " points to value=" << *px << " sizeof(px)=" << sizeof(px) << std::endl;

    *px = 10;
    std::cout << "x: address=" << &x << " value=" << x << " sizeof(x)=" << sizeof(x) << std::endl;
    std::cout << "px: address=" << &px << " value=" << px << " points to value=" << *px << " sizeof(px)=" << sizeof(px) << std::endl;

}

/*
x: address=0x62fe1c value=5 sizeof(x)=4
px: address=0x62fe10 value=0x62fe1c points to value=5 sizeof(px)=8 
x: address=0x62fe1c value=10 sizeof(x)=4
px: address=0x62fe10 value=0x62fe1c points to value=10 sizeof(px)=8
*/
