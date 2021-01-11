#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    A(int x) : x(x) {}
    
    class B
    {
    public:
        void fun(A a)
        {
            cout << a.x << endl;
        }
    };
};

int main()
{
    A obj1(42);
    A::B obj2;
    obj2.fun(obj1);
}

/*
42
*/