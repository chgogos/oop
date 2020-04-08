#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int MyInt1, MyInt2;
    int &MyIntRef = MyInt1;

    MyInt1 = 5;
    MyInt2 = MyIntRef;
    MyIntRef = 6;

    cout << MyInt2 << "\n";

    return 0;
}

/*
5
*/