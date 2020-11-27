#pragma once

const int MAX = 10;

class SimpleList
{
public:
    SimpleList();
    bool Insert(int item);          // inserts item into list (if room)
    int GetElement(unsigned int n); // returns element at index n
    void Print();                   // prints the list
    int GetSize();                  // returns number of elements in list

private:
    int array[MAX];
    int current; // number of stored items (max is 10)
};
