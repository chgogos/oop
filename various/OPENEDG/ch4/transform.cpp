// 4.1.4
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

template <class T>
void print(const T &value)
{
    cout << value << " ";
}

struct Add
{
    int _v;
    Add(int v) : _v(v) {}
    int operator()(int a)
    {
        return a + _v;
    }
};

struct Average
{
    double operator()(const int &a, const int &b)
    {
        return (a + b) / 2.0;
    }
};

int main()
{
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v1(t, t + 10);
    list<double> l1(v1.size());
    cout << "Source collection:\n";
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<int>);
    cout << endl
         << endl;
    cout << "Adding value - 10 to all the elements of the collection:\n";
    transform(v1.begin(), v1.end(), l1.begin(), Add(10));
    cout << "l1: ";
    for_each(l1.begin(), l1.end(), print<double>);
    cout << endl
         << endl;

    cout << "Adding value - 10 - storing result in the same collection:\n";
    transform(v1.begin(), v1.end(), v1.begin(), Add(10));
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<int>);
    cout << endl
         << endl;

    cout << "Calculating average of elements from two collections:\n";
    list<int> l2(l1.size());
    transform(v1.begin(), v1.end(), l1.rbegin(), l2.begin(), Average());
    cout << "l2: ";
    for_each(l2.begin(), l2.end(), print<double>);
    cout << endl
         << endl;

    return 0;
}

/*
Source collection:
v1: 1 2 3 4 5 6 7 8 9 10 

Adding value - 10 to all the elements of the collection:  
l1: 11 12 13 14 15 16 17 18 19 20 

Adding value - 10 - storing result in the same collection:
v1: 11 12 13 14 15 16 17 18 19 20 

Calculating average of elements from two collections:     
l2: 15 15 15 15 15 15 15 15 15 15 
*/