#include <string>
#include <iostream>
#include "memorycell.h"

using namespace std;

int main()
{
    MemoryCell<int> m1;
    MemoryCell<string> m2("hello");
    MemoryCell<MyClassOK> m3(42);
    // MemoryCell<MyClassNotOK> m4(42); //  error: use of deleted function 'MyClassNotOK::MyClassNotOK(const MyClassNotOK&)

    m1.write(37);
    m2.write(m2.read() + " world");
    cout << m1.read() << endl
         << m2.read() << endl;
}

/*
37
hello world
*/