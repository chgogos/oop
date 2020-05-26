#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v{1, 2, 6, 1, 3, 5, 3, 7, 3, 3, 9, 3};
    int key = 3;
    cout << "find()" << endl;
    auto it = find(v.begin(), v.end(), key);
    if (it != v.end())
        cout << key << " found at position " << it - v.begin() << endl;
    else
        cout << key << " not found" << endl;

    cout << "find_if()" << endl;
    it = find_if(v.begin(), v.end(), [](int x) { return x == 3; });
    if (it != v.end())
        cout << key << " found at position " << it - v.begin() << endl;
    else
        cout << key << " not found" << endl;

    cout << "find_if_not()" << endl;
    it = find_if_not(v.begin(), v.end(), [](int x) { return x != 3; });
    if (it != v.end())
        cout << key << " found at position " << it - v.begin() << endl;
    else
        cout << key << " not found" << endl;

    cout << "find() all occurences" << endl;
    it = find(v.begin(), v.end(), key);
    while (it != v.end())
    {
        cout << key << " found at position " << it - v.begin() << endl;
        it = find(it + 1, v.end(), key);
    }
}

/*
find()
3 found at position 4
find_if()
3 found at position 4
find_if_not()
3 found at position 4
find() all occurences
3 found at position 4
3 found at position 6
3 found at position 8
3 found at position 9
3 found at position 11
*/