// η ανάθεση ενός vector σε ένα άλλο αντιγράφει όλα τα περιεχόμενά του π.χ. v2=v1

#include <iostream>
#include <vector>

using namespace std;

int g = 1;

class A
{

public:
    int x;
    A()
    {
        x = g++;
        cout << "object created" << endl;
    }
};

int main()
{
    vector<A> v1(5);
    for (auto &x : v1)
    {
        cout << &x << "   " << x.x << endl;
    }

    cout << "--------------------" << endl;

    vector<A> v2 = v1;
    for (auto &x : v2)
    {
        cout << &x << "   " << x.x << endl;
    }

    cout << "--------------------" << endl;

    vector<A> &v3 = v1;
    for (auto &x : v3)
    {
        cout << &x << "   " << x.x << endl;
    }
}

/*
object created
object created
object created
object created
object created
0x1d2770   1
0x1d2774   2
0x1d2778   3
0x1d277c   4
0x1d2780   5
--------------------
0x1d2790   1
0x1d2794   2
0x1d2798   3
0x1d279c   4
0x1d27a0   5
--------------------
0x1d2770   1
0x1d2774   2
0x1d2778   3
0x1d277c   4
0x1d2780   5
*/
