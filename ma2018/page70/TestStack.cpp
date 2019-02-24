#include "Stack.h"
#include <iostream>

using namespace std;

int main()
{
    Stack s1(3);
    Stack s2 = s1;
    s1.push(1);
    s2.push(2);
    cout << "s1: " << s1.top() << endl;
    cout << "s2: " << s2.top() << endl;
    return 0;
}
