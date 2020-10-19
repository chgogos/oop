#include <iostream>

int main()
{

    int x = 5;
    double y = 6.0;
    int *p1 = &x;
    double *p2 = &y;
    void *p3;

    p3 = &x;
    *((int *)p3) = 7; // cast void* pointer to int* and then dereference it in order to modify the value it points to
    p3 = &y;
    *((double *)p3) = 7.5; // cast void* pointer to double* and then dereference it in order to modify the value it points to

    std::cout << "x: size=" << sizeof(x) << " value=" << x << std::endl; 
    std::cout << "y: size=" << sizeof(y) << " value=" << y << std::endl;
    std::cout << "p1: size=" << sizeof(p1) << " value=" << p1 <<  " points to value=" <<  *p1 << std::endl;
    std::cout << "p2: size=" << sizeof(p2) << " value=" << p2 <<  " points to value=" <<  *p2 << std::endl;
    std::cout << "p3: size=" << sizeof(p3) << " value=" << p3 <<  " points to value=" <<  (*(double*)p3) << std::endl;
    std::cout << "p3: size=" << sizeof(p3) << " value=" << p3 <<  " points to value=" <<  (*(int*)p3) << std::endl; // wrong result
}

/*
x: size=4 value=7
y: size=8 value=7.5
p1: size=8 value=0x62fe04 points to value=7  
p2: size=8 value=0x62fdf8 points to value=7.5
p3: size=8 value=0x62fdf8 points to value=7.5
p3: size=8 value=0x62fdf8 points to value=0 
*/