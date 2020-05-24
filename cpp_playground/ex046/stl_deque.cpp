#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> d{7, 1, 4, 2, 8};

    d.pop_back();
    d.pop_front();
    d.push_back(99);
    d.push_front(98);

    for (int &x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    sort(begin(d), end(d));
    for (int &x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Max size: " << d.max_size() << endl;
    cout << "Size: " << d.size() << endl;
}

/*
98 1 4 2 99 
1 2 4 98 99
Max size: 4611686018427387903
Size: 5
*/