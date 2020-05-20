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
    int (*fp)(int, int); 

    fp = fun1;
    cout << fp(2, 3) << endl;

    fp = fun2;
    cout << fp(2, 3) << endl;
}

/*
5
5
6
6
*/