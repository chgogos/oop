#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v{4, 3, 6, 1, 2, 8, 3, 3, 7, 3};
    size_t c = count(v.begin(), v.end(), 3);
    cout << "Count 3s: " << c << endl;
    c = count_if(v.begin(), v.end(), [](int x) { return x % 2 == 1; });
    cout << "Count odds: " << c << endl;
}

/*
Count 3s: 4
Count odds: 6
*/