#include <iostream>

using namespace std;

void fun(int x)
{
    cout << x << endl;
}

void fun(int x, int y = 1)
{
    cout << x << endl;
}

int main()
{
    // int a = 5;
    // fun(a); // ambiguous call of overloaded function 
}
