#include <iostream>
#include <cstring>
#include "stack.hpp"

int main()
{
    char a[] = "ABCDEFG";
    Stack<char> stack;
    for (int i = 0; i < strlen(a); i++)
    {
        stack.push(a[i]);
    }

    while (!stack.empty())
    {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
    return 0;
}

/*
G
F
E
D
C
B
A
*/