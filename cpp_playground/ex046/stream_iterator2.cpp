#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    cout << "Input values (ctrl+d to stop): " << endl;
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v));
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

/*
Input values (ctrl+d to stop):
1
2
3
4
5
1 2 3 4 5
*/