#include <iostream>
#include <stack>
#include <deque>
#include <vector>
#include <list>
using namespace std;

int main()
{
    stack<int> a_stack;
    // stack<int, deque<int>> a_stack; // ίδιο με το παραπάνω
    // stack<int, vector<int>> a_stack; 
    // stack<int, list<int>> a_stack;
    for (int x : {1, 2, 3, 4, 5})
    {
        a_stack.push(x);
        cout << "STACK SIZE:" << a_stack.size() << " " << a_stack.top() << endl;
    }

    cout << "#############################" << endl;
    while (!a_stack.empty())
    {
        cout << "STACK SIZE:" << a_stack.size() << " " << a_stack.top() << endl;
        a_stack.pop();
    }
}

/*
STACK SIZE:1 1
STACK SIZE:2 2
STACK SIZE:3 3
STACK SIZE:4 4
STACK SIZE:5 5
#############################
STACK SIZE:5 5
STACK SIZE:4 4
STACK SIZE:3 3
STACK SIZE:2 2
STACK SIZE:1 1
*/