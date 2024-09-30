#include <iostream>

using namespace std;

void fun(int x)
{
    cout << "fun(int) called: " << x << endl;
}

void fun(int &x)
{
    cout << "fun(int&) called: " << x << endl;
}

// void fun(int &&x)
// {
//     cout << "fun(int&) called: " << x << endl;
// }


int main()
{
    fun(7);

    // int a = 5;
    // fun(a); // ambiguous call of overloaded function 
}
