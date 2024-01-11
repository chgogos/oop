#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point **p3 = new point *[5]; // dynamic array of pointers
    for (int i = 0; i < 5; i++)
    {
        p3[i] = new point;
    }
    p3[0]->x = 1;
    p3[0]->y = 1;
    cout << "DYNAMIC ARRAY OF POINTERS: " << p3[0]->x << " " << p3[0]->y << endl;
    for (int i = 0; i < 5; i++)
    {
        delete p3[i];
    }
    delete[] p3;
}