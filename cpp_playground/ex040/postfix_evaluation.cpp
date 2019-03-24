#include <iostream>
#include "stack.hpp"

int main()
{
    int postfix[]={'1', '2', '3', '*', '+', '9', '-'};

    Stack<int> stack;
    for (int i = 0; i < sizeof(postfix) / sizeof(int); i++)
    {
        int ch = postfix[i];
        std::cout << "Process symbol " << static_cast<char>(ch) << " stack: ";
        if (isdigit(ch))
        {
            stack.push(ch - '0');
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
