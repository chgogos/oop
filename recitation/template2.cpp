#include <iostream>

using namespace std;

template <class T>
class A
{
private:
    T a;
    T b;

public:
    A(T a, T b) : a(a), b(b) {}
    void info()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    A<int> obj1(5, 6);
    A<double> obj2(3.1, 6.9);

    obj1.info();
    obj2.info();
}

/*
5 6
3.1 6.9
*/