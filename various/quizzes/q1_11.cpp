#include <iostream>

using namespace std;

class A
{
protected:
    int a;

public:
    A(int _a) : a(_a) {}
};
class B : public A
{
protected:
    int b;

public:
    B(int _a, int _b) : A(_a), b(_b) {}
};
class C : public B
{
protected:
    int c;

public:
    C(int _a, int _b, int _c) : B(_a, _b), c(_c) {}
    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
};
int main()
{
    C obj(1, 2, 3);
    obj.display();
}

/*
1 2 3
*/