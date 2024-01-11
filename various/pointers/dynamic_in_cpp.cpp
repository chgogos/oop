#include <iostream>
#include <cstdio>

int main()
{
    int *p = new int;
    *p = 5;
    printf("p=%x *p=%i\n", p, *p);
    delete p;

    p = new int[3];
    printf("p=%x *p[0]=%i *p[1]=%i *p[2]=%i\n", p, p[0], p[1], p[2]);
    delete[] p;

    p = new int[3](); // αρχικοποίηση με 0
    printf("p=%x *p[0]=%i *p[1]=%i *p[2]=%i\n", p, p[0], p[1], p[2]);
    delete[] p;
}