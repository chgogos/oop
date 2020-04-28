#include <string>
#include <iostream>
#include "memorycell.h"

using namespace std;

int main()
{
    MemoryCell<int> m1;
    MemoryCell<string> m2("hello");

    m1.write(37);
    m2.write(m2.read() + " world");
    cout << m1.read() << endl
         << m2.read() << endl;
}

/*
37
hello world
*/