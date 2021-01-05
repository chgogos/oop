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
    B *bs;
    int N;

public:
    A(int N)
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        this->N = N;
        bs = new B[N];
    }
    ~A()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        delete[] bs;
    }
    void bar()
    {
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
        for (int i=0;i<N;i++)
        {
            bs[i].foo();
        }
        cout << __LINE__ << " " << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
    A obj(3);
    obj.bar();
}

/*
24 A::A(int)
35 void A::bar()
11 void B::foo()
11 void B::foo()
11 void B::foo()
40 void A::bar()
30 A::~A()
*/