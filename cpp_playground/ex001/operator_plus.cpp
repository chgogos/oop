#include <iostream>
using namespace std;

int operator+(int p1, int p2) // nonmember operator requires a parameter with class or enum type
{
    return p1 - p2;
}

int main()
{
    int x = 1, y = 2;
    int z = +(x, y);

    cout << z << endl;
}