#include "simplelist1.h"
#include <iostream>

using namespace std;

int main()
{
    SimpleList sl;
    sl.Insert(10);
    sl.Insert(20);
    sl.Insert(30);
    cout << sl.GetElement(1) << endl;
    sl.Print();
}

/*
20
10 20 30
*/