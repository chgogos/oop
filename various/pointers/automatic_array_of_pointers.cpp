#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
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
}