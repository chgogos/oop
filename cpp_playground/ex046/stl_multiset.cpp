#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> s;
    for (int x : {2, 6, 1, 7, 2, 8, 4, 4})
    {
        s.insert(x);
    }

    for (auto &x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << s.count(4) << endl;

    auto itr = s.find(5);
    if (itr == s.end())
    {
        cout << "key not found" << endl;
    }
}

/*
1 2 2 4 4 6 7 8 
2
key not found
*/