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
};

int main()
{
    MyDerivedClass D1; // error: cannot declare variable 'D1' to be of abstract type 'MyDerivedClass'
    D1.foo();
    return 0;
}

