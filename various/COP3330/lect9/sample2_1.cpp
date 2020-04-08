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
    cout << *MyIntPtr << "\n";
}

/*
sample2_1.cpp:11:13: warning: address of stack memory associated with local variable 'MyInt' returned
      [-Wreturn-stack-address]
    return &MyInt;
            ^~~~~
1 warning generated.
7
-1888823456
*/