#include <iostream>

using namespace std;

class A
{
private:
    int x;
    const int y;

public:
    A(): x(0), y(77){}
    A(int a, int b): x(a), y(b){}

    void fun() const
    {
        cout << x;
    }

    void fun2(){
        x =42;
    }
};

void fun(const int x)
{
    // x++;
    cout << x;
}

int main()
{
    // παράδειγμα 1
    const int a = 5;
    cout << a << endl;

    // παράδειγμα 2
    int y;
    fun(y);
    cout << y << endl;

    // παράδειγμα 3
    A obj;
    obj.fun();
    obj.fun2();

    // παράδειγμα 4
    const A obj2;
    obj2.fun();
    // obj2.fun2();

    A obj3(3,55);

}