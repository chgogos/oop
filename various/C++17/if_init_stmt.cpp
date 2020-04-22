#include <iostream>

using namespace std;

int fun()
{
    return 42;
}

int main()
{
    if (int i = fun(); i < 10)
    {
        cout << "T. The value of i is " << i << endl;
    }
    else
    {
        cout << "F. The value of i is " << i << endl;
    }
}
