#include <iostream>

using namespace std;

class B
{
public:
    void foo()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

class A
{
public:
    void bar(B b)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        b.foo();
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
    B obj1;
    A obj2;
    obj2.bar(obj1);
}

/*
19 void A::bar(B)
10 void B::foo() 
21 void A::bar(B)
*/