#include <iostream>
#include "simplelist3.h"

using namespace std;

template <class T>
SimpleList<T>::SimpleList()
{
    current = 0;
}

template <class T>
bool SimpleList<T>::Insert(T item)
{
    if (current < MAX)
    {
        array[current] = item;
        current++;
        return true;
    }
    else
        return false;
}

template <class T>
T SimpleList<T>::GetElement(unsigned int n)
{
    if (n >= MAX)
        n = MAX - 1;
    return array[n];
}

template <class T>
void SimpleList<T>::Print()
{
    if (current == 0)
    {
        cout << "Empty List";
        return;
    }
    int i;
    for (i = 0; i < current - 1; i++)
        cout << array[i] << ' ';
    cout << array[i];
}

template <class T>
int SimpleList<T>::GetSize()
{
    return current;
}
