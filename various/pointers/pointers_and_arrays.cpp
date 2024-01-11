#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point *p1 = new point[5]; // pointer 2 dynamic array
    p1[0].x = 1;
    p1[0].y = 1;
    cout << "POINTER TO DYNAMIC ARRAY: " << p1[0].x << " " << p1[0].y << endl;
    delete[] p1;

    point *p2[5]; // automatic array of pointers
    for (int i = 0; i < 5; i++)
    {
        p2[i] = new point;
    }
    p2[0]->x = 1;
    p2[0]->y = 1;
    cout << "AUTOMATIC ARRAY OF POINTERS: " << p2[0]->x << " " << p2[0]->y << endl;
    for (int i = 0; i < 5; i++)
    {
        delete p2[i];
    }

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
    delete [] p3;
}