#include <iostream>

using namespace std;

class MyAbstractClass
{
public:
    virtual void Hello() = 0;
    void GoodBye()
    {
        cout << "MyAbstractClass::GoodBye\n";
    }
};

class MyDerivedClass : public MyAbstractClass
{
public:
    void foo()
    {
        cout << "MyDerivedClass::foo()";
    }
    void Hello()
    {
        cout << "make Hello() non-virtual.\n";
    }
};

int main()
{
    MyDerivedClass *D1;

    D1 = new MyDerivedClass;
    D1->Hello();
    delete D1;
    return 0;
}

/*
make Hello() non-virtual.
*/