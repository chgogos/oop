#include <iostream>

using namespace std;

class B;

class A
{
private:
    int x;

public:
    A(int x) : x(x) {}

    friend class B;
};

class B
{
public:
    void fun(A a)
    {
        cout << a.x << endl;
    }
};

int main()
{
    A obj(42);
    B obj2;
    obj2.fun(obj);
}

/*
42
*/