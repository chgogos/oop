#include <iostream>

using namespace std;

int main()
{
    int MyArray[5];
    int *MyIntPtr = MyArray;
    char junk;

    cout << "Size of Int:" << sizeof(int) << "\n";
    cout << MyIntPtr << "\n";
    cin >> junk;
    cout << (MyIntPtr + 1) << "\n";
    cout << &MyIntPtr[1] << endl;
    cout << &MyIntPtr[-1] << endl;
}

/*
Size of Int:4
0x7ffee5acc6b0
????
*/