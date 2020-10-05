// 3.1.5

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;
template <class T>
void print(const T &value)
{
    cout << value << " ";
}

struct Compare
{

    bool operator()(const char &f, const char &s)
    {
        return tolower(f) == tolower(s);
    }
};

int main()
{
    int t[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 2};
    vector<int> v1(t, t + 18);
    for_each(v1.begin(), v1.end(), print<int>);
    cout << endl;
    cout << endl;
    int ts[] = {2, 3};
    cout << "Searching for the any of elements 2, 3 from the beginning:\n";
    vector<int>::iterator found = find_first_of(v1.begin(), v1.end(), ts, ts + 2);
    if (found != v1.end())
    {
        cout << "Found value: " << *found << " at position : " << distance(v1.begin(), found) << endl;
        cout << "Looking for any other element with value 2 or 3\n";
        ++found; // skip element already found if any;
        while ((found = find_first_of(found, v1.end(), ts, ts + 2)) != v1.end())
        {
            cout << "Found value: " << *found << " at position : " << distance(v1.begin(), found) << endl;
            ++found;
        }
    }
    else
    {
        cout << "No elements with value 2 or 3!\n";
    }
    cout << endl;

    char t1[] = {'a', 'b', 'c', 'd', 'A', 'b', 'D', 'A', 'b', 'C', 'a', 'f'};
    vector<int> v2(t1, t1 + 12);
    for_each(v2.begin(), v2.end(), print<int>);
    cout << endl;
    cout << endl;
    char ts1[] = {'a', 'b'};
    cout << "Searching for the any of elements 'a', 'b' from the beginning:\n";
    vector<int>::iterator found1 = find_first_of(v2.begin(), v2.end(), ts1, ts1 + 2, Compare());
    if (found1 != v2.end())
    {
        cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
        cout << "Looking for any other element with value 'a' or 'b'\n";
        ++found1; // skip element already found if any;
        while ((found1 = find_first_of(found1, v2.end(), ts1, ts1 + 2, Compare())) != v2.end())
        {
            cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
            ++found1;
        }
    }
    else
    {
        cout << "No elements with value 'a' or 'b'!\n";
    }
    cout << endl;
    cout << "Searching for the any of elements 'a', 'b' from the beginning - case sensitive:\n";
    found1 = find_first_of(v2.begin(), v2.end(), ts1, ts1 + 2);
    if (found1 != v2.end())
    {
        cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
        cout << "Looking for any other element with value 'a' or 'b'\n";
        ++found1; // skip element already found if any;
        while ((found1 = find_first_of(found1, v2.end(), ts1, ts1 + 2)) != v2.end())
        {
            cout << "Found value: " << *found1 << " at position : " << distance(v2.begin(), found1) << endl;
            ++found1;
        }
    }
    else
    {
        cout << "No elements with value 'a' or 'b'!\n";
    }
    return 0;
}

/*
1 2 3 4 5 1 2 3 4 5 6 7 8 9 2 3 4 2 

Searching for the any of elements 2, 3 from the beginning:
Found value: 2 at position : 1
Looking for any other element with value 2 or 3
Found value: 3 at position : 2
Found value: 2 at position : 6
Found value: 3 at position : 7
Found value: 2 at position : 14
Found value: 3 at position : 15
Found value: 2 at position : 17

97 98 99 100 65 98 68 65 98 67 97 102

Searching for the any of elements 'a', 'b' from the beginning:
Found value: 97 at position : 0
Looking for any other element with value 'a' or 'b'
Found value: 98 at position : 1
Found value: 65 at position : 4
Found value: 98 at position : 5
Found value: 65 at position : 7
Found value: 98 at position : 8
Found value: 97 at position : 10

Searching for the any of elements 'a', 'b' from the beginning - case sensitive:
Found value: 97 at position : 0
Looking for any other element with value 'a' or 'b'
Found value: 98 at position : 1
Found value: 98 at position : 5
Found value: 98 at position : 8
Found value: 97 at position : 10
*/
