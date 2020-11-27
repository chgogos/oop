#include <iostream>
#include "stack.hpp"

int main()
{
    // 123*+9- ==> 16+9- ==> 79- ==> -2
    int postfix[]={'1', '2', '3', '*', '+', '9', '-'};

    Stack<int> stack;
    for (int i = 0; i < sizeof(postfix) / sizeof(int); i++)
    {
        int ch = postfix[i];
        std::cout << "Process symbol " << static_cast<char>(ch) << " stack: ";
        if (isdigit(ch))
        {
            stack.push(ch - '0');  // '5' - '0' ==> 53 - 48 = 5
        }
        else
        {
            int op1 = stack.top();
            stack.pop();
            int op2 = stack.top();
            stack.pop();
            switch (ch)
            {
            case '*':
                stack.push(op2 * op1);
                break;
            case '/':
                stack.push(op2 / op1);
                break;
            case '+':
                stack.push(op2 + op1);
                break;
            case '-':
                stack.push(op2 - op1);
                break;
            }
        }
        stack.print();
    }
    std::cout << "Evaluates to " << stack.top() << std::endl;
    return 0;
}

/*
Process symbol 1 stack: 1
Process symbol 2 stack: 21
Process symbol 3 stack: 321
Process symbol * stack: 61
Process symbol + stack: 7
Process symbol 9 stack: 97
Process symbol - stack: -2
Evaluates to -2
*/