#include <iostream>
#include <string>

using namespace std;

template <class T>
class Stack
{
private:
    T data[100];
    int top_;

public:
    Stack() : top_(-1) {}
    void push(const T &item)
    {
        top_++;
        data[top_] = item;
    }
    void pop()
    {
        top_--;
    }
    const T &top() const
    {
        return data[top_];
    }
    bool empty() const
    {
        return top_ == -1;
    }
    void print()
    {
        for (int i = top_; i >= 0; i--)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    // α) στοίβα χαρακτήρων
    string s = "this is a test for the templated stack";
    Stack<char> my_stack;
    for (char c : s)
    {
        my_stack.push(c);
    }

    while (!my_stack.empty())
    {
        cout << my_stack.top();
        my_stack.pop();
    }
    cout << endl;

    // β) στοίβα ακεραίων
    int a[] = {7, 13, 21, 6, 15, 9, 11, 22, 20, 13};
    Stack<int> my_stack2;
    for (int x : a)
    {
        my_stack2.push(x);
    }
    while (!my_stack2.empty())
    {
        cout << my_stack2.top() << " ";
        my_stack2.pop();
    }
}

// kcats detalpmet eht rof tset a si siht
// 13 20 22 11 9 15 6 21 13 7