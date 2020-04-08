#include <iostream>

using namespace std;

int main()
{
    int *MyIntPointer1;
    int *MyIntPointer2;

    MyIntPointer1 = new int;
    *MyIntPointer1 = 5;
    delete MyIntPointer1;

    MyIntPointer2 = new int;
    *MyIntPointer2 = 9;

    cout << *MyIntPointer1 << " " << *MyIntPointer2 << "\n";
    cout << MyIntPointer1 << " " << MyIntPointer2 << "\n";

    delete MyIntPointer2;

    return 0;
}

/*
9 9
0x7ff910401940 0x7ff910401940
*/