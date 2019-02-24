#ifndef STACK_H
#define STACK_H

class Stack
{
  public:
    Stack(int inCapacity);
    void push(double inDouble);
    double top() const;
    void pop();
    bool isFull() const;
    bool isEmpty() const;

  private:
    int mCapacity;
    double *mElements;
    double *mTop;
};

#endif