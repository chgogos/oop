// class template
#include <iostream>

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
