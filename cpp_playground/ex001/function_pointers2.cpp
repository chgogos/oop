#include <iostream>

using namespace std;

int fun1(int a, int b)
{
    return a + b;
}

int fun2(int a, int b)
{
    return a * b;
}

int main()
{

    auto fp = fun1; // type inference για function pointer, το fp είναι τύπου int(*)(int,int)
    cout << (*fp)(2, 3) << endl;
    cout << fp(2, 3) << endl; // implicit dereference

    fp = fun2;
    cout << (*fp)(2, 3) << endl;
    cout << fp(2, 3) << endl; // implicit dereference
}

/*
5
5
6
6
*/