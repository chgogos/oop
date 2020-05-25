#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
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
1 2 4 6 7 8 
*/