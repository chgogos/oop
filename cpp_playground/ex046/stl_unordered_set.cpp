#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;
    for (int x : {2, 6, 1, 7, 2, 8, 4, 4})
    {
        s.insert(x);
    }

    for (auto &x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}

/*
4 8 1 6 7 2 
*/