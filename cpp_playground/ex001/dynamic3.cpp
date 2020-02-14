#include <iostream>

int main()
{
    int *p1 = new int;
    *p1 = 5;

    int *p2 = new int(10);

    int *p3 = new int[100];
    for (int i = 0; i < 100; i++)
    {
        p3[i] = i;
    }
    std::cout << sizeof(p3) << std::endl;

    delete p1;
    delete p2;
    delete[] p3;
}