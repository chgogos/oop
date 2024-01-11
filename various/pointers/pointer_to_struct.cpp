#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point a = {3, 2};
    point *p = &a;
    p->x = 4;
    p->y = 5;
}