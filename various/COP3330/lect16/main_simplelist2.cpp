#include "simplelist2.h"
#include <iostream>

using namespace std;

int main()
{
    SimpleList sl;
    sl.Insert(10.1);
    sl.Insert(20.2);
    sl.Insert(30.3);
    cout << sl.GetElement(1) << endl;
    sl.Print();
}

/*
20.2
10.1 20.2 30.3
*/

