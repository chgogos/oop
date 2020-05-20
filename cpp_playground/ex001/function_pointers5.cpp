#include <iostream>
#include <functional>

using namespace std;

int fun1(int a, int b)
{
    return a + b;
}

int fun2(int a, int b)
{
    return a * b;
}

using myfptr = function<int(int, int)>;

int main()
{
    myfptr fp; // τρόπος δήλωσης function pointer μέσω std::function της C++11 και type alias

    fp = fun1;
    cout << fp(2, 3) << endl;

    fp = fun2;
    cout << fp(2, 3) << endl;
}

/*
5
6
*/