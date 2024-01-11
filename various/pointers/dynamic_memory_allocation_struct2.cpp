#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point *p = new point;
    p->x = 1;
    p->y = 1;
    cout << p->x << " " << p->y << endl;
    delete p;
}