#include <iostream>
#include <cstdlib>

struct Point {
    double x;
    double y;
};

int main()
{
    int *p1 = (int *)malloc(sizeof(int));
    *p1 = 7;
    std::cout << *p1 << std::endl;
    free(p1);

    struct Point *p2;
    p2 = (struct Point*)malloc(sizeof(struct Point));
    p2->x=4.0;
    p2->y=5.0;
    std::cout << p2->x << " - " << p2->y << std::endl;
    free(p2);
}


/*
7
4 - 5
*/