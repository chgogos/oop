// 4.1.5
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

template <class T>
void print(const T &value)
{
    cout << value << " ";
}

struct Odd
{
    bool operator()(const int &a)
    {
        return a % 2 != 0;
    }
};

int main()
{
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> l1(t, t + 10);
    cout << "Source collection:\n";
    cout << "l1: ";
    for_each(l1.begin(), l1.end(), print<int>);
    cout << endl
         << endl;
    cout << "Replacing value 5 with 15:\n";
    replace(l1.begin(), l1.end(), 5, 15);
    cout << "l1: ";
    for_each(l1.begin(), l1.end(), print<int>);
    cout << endl
         << endl;

    cout << "Replacing all odd numbers with value 13:\n";
    replace_if(l1.begin(), l1.end(), Odd(), 13);
    cout << "l1: ";
    for_each(l1.begin(), l1.end(), print<int>);
    cout << endl
         << endl;

    return 0;
}

/*
Source collection:        
l1: 1 2 3 4 5 6 7 8 9 10  

Replacing value 5 with 15:
l1: 1 2 3 4 15 6 7 8 9 10

Replacing all odd numbers with value 13:
l1: 13 2 13 4 13 6 13 8 13 10
*/