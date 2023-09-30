#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    typedef pair<int, int> int_pair;
    vector<int_pair> v{{5, 2}, {10, 12}, {0, 2}, {3, 1}};
    sort(v.begin(), v.end(), [](int_pair p1, int_pair p2)
         { return p1.first + p1.second > p2.first + p2.second; });

    for (const int_pair &p : v)
    {
        cout << p.first << ", " << p.second << endl;
    }
}

// 10, 12
// 5, 2
// 3, 1
// 0, 2