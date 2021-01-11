#include <iostream>

using namespace std;

class A
{
private:
    int x[100];

public:
    ~A()
    {
        cout << "Object destroyed at " << this << " size=" << sizeof(*this) << endl;
    }
};

int main()
{
    A *x[10];
    for (int i = 0; i < 10; i++)
    {
        x[i] = new A;
    }
    for (int i = 0; i < 10; i++)
    {
        delete x[i];
    }
}

/*
Object destroyed at 0xd028d0 size=400
Object destroyed at 0xd02a70 size=400
Object destroyed at 0xd070a0 size=400
Object destroyed at 0xd07240 size=400
Object destroyed at 0xd073e0 size=400
Object destroyed at 0xd07580 size=400
Object destroyed at 0xd07720 size=400
Object destroyed at 0xd078c0 size=400
Object destroyed at 0xd07a60 size=400
Object destroyed at 0xd07c00 size=400
*/