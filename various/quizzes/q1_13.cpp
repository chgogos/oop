#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    cout << add(3, 2) << endl;
    cout << add(2.1, 3.2) << endl;
}

/*
3
3.2
*/