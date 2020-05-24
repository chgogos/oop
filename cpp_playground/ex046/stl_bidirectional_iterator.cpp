#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> a_list{1, 3, 5, 7, 9};

    list<int>::iterator itr = a_list.begin();
    advance(itr, 4);
    a_list.insert(itr, 50); // 1, 3, 5, 7, 50, 9
    advance(itr, -2);
    a_list.insert(itr, 40); // 1, 3, 5, 40, 7, 50, 9
    itr++;
    a_list.insert(itr, 30); // 1, 3, 5, 40, 7, 30, 50, 9

    for (auto x : a_list)
        cout << x << " ";
    cout << endl;
}

/*
1 3 5 40 7 30 50 91
*/