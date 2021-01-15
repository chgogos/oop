#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<tuple<int, int, int>> v{{1, 2, 3}, {4, 2, 1}, {8, 3, 6}, {5, 2, 9}, {6, 1, 4}};
    sort(v.begin(), v.end(), [](tuple<int, int, int> x, tuple<int, int, int> y) { return get<0>(x) + get<1>(x) + get<2>(x) < get<0>(y) + get<1>(y) + get<2>(y); });
    for (tuple<int, int,int> t : v)
    {
        cout << get<0>(t) << "," << get<1>(t) << "," << get<2>(t) << " -> " << get<0>(t) + get<1>(t) + get<2>(t) << endl;
    }
}

/*
1,2,3 -> 6
4,2,1 -> 7
6,1,4 -> 11
5,2,9 -> 16
8,3,6 -> 17
*/