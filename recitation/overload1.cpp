#include <iostream>
#include <algorithm>

using namespace std;

class A
{
private:
    int x;
    int y;
    int z;

public:
    A(int x, int y, int z) : x(x), y(y), z(z) {}
    bool operator<(const A &other)
    {
        return x + y + z < other.x + other.y + other.z;
    }

    friend ostream &operator<<(ostream &os, const A &obj)
    {
        os << obj.x << " " << obj.y << " " << obj.z << " => " << obj.x + obj.y + obj.z;
        return os;
    }
};

int main()
{
    A a[] = {A(5, 2, 3), A(2, 4, 1), A(0, 1, 2), A(1, 1, 1)};
    sort(begin(a), begin(a) + 5);
    for (const A& obj : a)
    {
        cout << obj << endl;
    }
}

/*
0 1 2 => 3
1 1 1 => 3
2 4 1 => 7
5 2 3 => 10
*/