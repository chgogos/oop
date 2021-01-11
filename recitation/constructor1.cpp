#include <iostream>

using namespace std;

class A
{
private:
    int x;
    int y;

public:
    A() : x(0), y(0) {}
    A(int x, int y = 42) : x(x), y(y) {}

    friend ostream &operator<<(ostream &os, const A &obj)
    {
        os << obj.x << " " << obj.y;
        return os;
    }
};

int main()
{
    A obj1;
    cout << obj1 << endl;

    A x[] = {A(), A(1), A(2), A(3), A(4, 50)};
    for (A &obj : x)
    {
        cout << obj << endl;
    }
}

/*
0 0
0 0
1 42
2 42
3 42
4 50
*/