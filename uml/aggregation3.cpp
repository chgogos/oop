#include <iostream>
#include <vector>

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
private:
    vector<B> &v_bs;

public:
    A(vector<B> &v) : v_bs(v)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
    void bar()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        for (B &obj : v_bs)
        {
            obj.foo();
        }
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
    vector<B> v{B(), B(), B()};
    A obj(v);
    obj.bar();
}

/*
23 A::A(std::vector<B>)
27 void A::bar()
11 void B::foo()
11 void B::foo()
11 void B::foo()
32 void A::bar()
*/