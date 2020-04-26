#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v{7, 4, 6, 1, 2, 3, 1, 2, 3, 4, 5, 3, 6, 6, 2, 1};
    cout << "Found at position: " << find(begin(v), end(v), 3) - begin(v) << endl;

    // C++14
    auto rit = find(rbegin(v), rend(v), 3);
    cout << "Found at position: " <<  rit - rbegin(v) << endl;
}

/*
Found at position: 5
Found at position: 4
*/