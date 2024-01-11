#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point *p1 = new point[5];
    p1[0].x = 1;
    p1[0].y = 1;
    cout << "POINTER TO DYNAMIC ARRAY: " << p1[0].x << " " << p1[0].y << endl;
    delete[] p1;

}