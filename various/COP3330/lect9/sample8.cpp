#include <iostream>
#include <stdio.h>

using namespace std;

void MyIncrement(int &x)
{
    x++;
}

int main()
{
    int MyInt = 4;

    MyIncrement(MyInt);

    cout << MyInt << "\n";

    return 0;
}

/*
5
*/
