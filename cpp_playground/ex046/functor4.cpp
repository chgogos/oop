#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> set1;
    // set<int, less<int>> set1; // εναλλακτικά

    set<int, greater<int>> set2;

    for (int x : {2, 7, 1, 9, 4})
    {
        set1.insert(x);
        set2.insert(x);
    }

    for (int x : set1)
    {
        cout << x << " ";
    }
    cout << endl;

    for (int x : set2)
    {
        cout << x << " ";
    }
    cout << endl;
}

/*
1 2 4 7 9 
9 7 4 2 1
*/