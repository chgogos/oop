#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{4, 2, 5, 6, 1};
    sort(v.begin(), v.end(), greater<int>());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
}

/*
6
5
4
2
1
*/