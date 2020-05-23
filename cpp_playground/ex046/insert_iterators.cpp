#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2(3, 0);

    cout << "CHEKPOINT 1" << endl;
    // copy(v1.begin(), v1.end(), begin(v2)); // segmentation fault
    copy(v1.begin(), v1.end(), back_inserter(v2));
    cout << "v2: ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    cout << "CHEKPOINT 2" << endl;
    deque<int> d(3, 0);
    copy(v1.begin(), v1.end(), back_inserter(d));
    copy(v1.begin(), v1.end(), front_inserter(d));
    cout << "d: ";
    for (int x : d)
        cout << x << " ";
    cout << endl;

    cout << "CHEKPOINT 3" << endl;
    list<int> l(3, 0);
    copy(v1.begin(), v1.end(), back_inserter(l));
    copy(v1.begin(), v1.end(), front_inserter(l));
    cout << "l: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    cout << "CHEKPOINT 4" << endl;
    copy(v1.begin(), v1.end(), inserter(v2, v2.begin() + 1));
    cout << "v2: ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    cout << "CHEKPOINT 5" << endl;
    auto itr = l.begin();
    advance(itr, 3);
    copy(v1.begin(), v1.end(), inserter(l, itr));
    cout << "l: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;
}

/*
CHEKPOINT 1
v2: 0 0 0 1 2 3 4 5 
CHEKPOINT 2
d: 5 4 3 2 1 0 0 0 1 2 3 4 5 
CHEKPOINT 3
l: 5 4 3 2 1 0 0 0 1 2 3 4 5 
CHEKPOINT 4
v2: 0 1 2 3 4 5 0 0 1 2 3 4 5 
CHEKPOINT 5
l: 5 4 3 1 2 3 4 5 2 1 0 0 0 1 2 3 4 5
*/