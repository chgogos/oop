// 4.1.2

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

template <class T>
void print(const T &value)
{
    cout << value << " ";
}

int main()
{
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v1(t, t + 10);
    cout << "Source collection:\n";
    for_each(v1.begin(), v1.end(), print<int>);
    cout << endl;
    deque<int> d1(10); //list for 10 elements;
    cout << "Target collection before copy:\n";
    for_each(d1.begin(), d1.end(), print<int>);
    cout << endl;
    copy(v1.begin(), v1.end(), d1.begin());
    cout << "Target collection after copy:\n";
    for_each(d1.begin(), d1.end(), print<int>);
    cout << endl;
    cout << endl;

    cout << "Copy backward\n";
    vector<int> v2(t, t + 10);
    cout << "Source collection:\n";
    for_each(v2.begin(), v2.end(), print<int>);
    cout << endl;
    deque<int> d2(10); //list for 10 elements;
    cout << "Target collection before copy:\n";
    for_each(d2.begin(), d2.end(), print<int>);
    cout << endl;
    copy_backward(v2.begin(), v2.end(), d2.end());
    cout << "Target collection after copy:\n";
    for_each(d2.begin(), d2.end(), print<int>);
    cout << endl;
    cout << endl;

    return 0;
}

/*
Source collection:
1 2 3 4 5 6 7 8 9 10 
Target collection before copy:
0 0 0 0 0 0 0 0 0 0
Target collection after copy:
1 2 3 4 5 6 7 8 9 10

Copy backward
Source collection:
1 2 3 4 5 6 7 8 9 10
Target collection before copy:
0 0 0 0 0 0 0 0 0 0
Target collection after copy:
1 2 3 4 5 6 7 8 9 10 
*/