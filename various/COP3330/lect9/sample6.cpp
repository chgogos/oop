#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int MyInt;
    int &MyIntRef = MyInt; //if this was unititialized a compiler
                           //error would be generated

    MyInt = 5;
    MyIntRef = 6;
    cout << MyInt << "\n";

    return 0;
}

/*
6
*/
