#include <iostream>

using namespace std;

int main()
{
    char MyChar = 'a';
    int *MyIntPtr;

    MyIntPtr = (int *)&MyChar;
    cout << *MyIntPtr << "\n";
    cout << *((char*)MyIntPtr) << "\n";
}

/*
-1964586911
a
*/