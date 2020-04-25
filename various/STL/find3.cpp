#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 7, 0, 3, 2, 1, 4, 7, 8, 2, 1, 9, 6, 7, 2};

    // εύρεση του πρώτου 2 μετά το πρώτο 7
    auto result = find(begin(v), end(v), 7);
    result = find(result, end(v), 2);
    if (result != end(v))
    {
        cout << "found " << *result  << " at position " << result - begin(v) << endl;
    }
}