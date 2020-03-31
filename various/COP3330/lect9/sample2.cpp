#include <iostream>

using namespace std;

int *foo(int a)
{
    int MyInt;

    MyInt = a;

    return &MyInt;
}

int main()
{
    int *MyIntPtr;

    MyIntPtr = foo(5);
    foo(7);

    cout << *MyIntPtr << "\n";
}