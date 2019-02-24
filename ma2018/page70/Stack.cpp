#include "Stack.h"

Stack::Stack(int inCapacity)
{
    mCapacity = inCapacity;
    mElements = new double[mCapacity];
    mTop = mElements;
}

Stack::Stack(const Stack &s)
{
    mCapacity = s.mCapacity;
    mElements = new double[mCapacity];
    int nr = s.mTop - s.mElements;
    for (int i = 0; i < nr; ++i)
    {
        mElements[i] = s.mElements[i];
    }
    mTop = mElements + nr;
}

Stack::~Stack()
{
    if (mElements != nullptr)
    {
        delete[] mElements;
        mElements = nullptr;
    }
}

void Stack::push(double inDouble)
{
    if (!isFull())
    {
        *mTop = inDouble;
        mTop++;
    }
}