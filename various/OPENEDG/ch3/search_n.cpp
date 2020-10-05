// 3.3.10

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <list>

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
    int t[] = {1, 2, 3, 4, 1, 1, 1, 2, 3, 3, 5, 6, 7, 7, 7, 2, 3, 4};
    vector<int> v1(t, t + 18);
    for_each(v1.begin(), v1.end(), print<int>);
    cout << endl;
    cout << endl;
    cout << "Searching for the following sequence: 7 7 7:\n";
    vector<int>::iterator found = search_n(v1.begin(), v1.end(), 3, 7);
    if (found != v1.end())
    {
        cout << "Sequence: 7 7 7 " << *found << " has been found at position: " << distance(v1.begin(), found) << endl;
    }
    else
    {
        cout << "Sequence 7 7 7 could not  be found\n";
    }
    cout << endl;

    cout << "Searching for the following sequence: 2 2:\n";
    found = search_n(v1.begin(), v1.end(), 2, 2);
    if (found != v1.end())
    {
        cout << "Sequence: 2 2 " << *found << " has been found at position: " << distance(v1.begin(), found) << endl;
    }
    else
    {
        cout << "Sequence 2 2 could not be found\n";
    }
    cout << endl;

    char ts[] = {'a', 'b', 'a', 'A', 'A', 'b', 'D', 'A', 'b', 'C', 'a', 'f'};
    list<char> l1(ts, ts + 12);
    cout << "Searching for the following sequence: A A - case sensitive comparison:\n";
    list<char>::iterator founds = search_n(l1.begin(), l1.end(), 2, 'A');
    if (founds != l1.end())
    {
        cout << "Sequence: A A " << *founds << " has been found at position: " << distance(l1.begin(), founds) << endl;
    }
    else
    {
        cout << "Sequence: A A could not  be found\n";
    }
    cout << endl;

    cout << "Searching for the following sequence: A A - case insensitive comparison:\n";
    founds = search_n(l1.begin(), l1.end(), 2, 'A', Compare());
    if (founds != l1.end())
    {
        cout << "Sequence: A A " << *founds << " has been found at position: " << distance(l1.begin(), founds) << endl;
    }
    else
    {
        cout << "Sequence: A A could not  be found\n";
    }
    cout << endl;

    return 0;
}

/*
1 2 3 4 1 1 1 2 3 3 5 6 7 7 7 2 3 4 

Searching for the following sequence: 7 7 7:
Sequence: 7 7 7 7 has been found at position: 12

Searching for the following sequence: 2 2:
Sequence 2 2 could not be found

Searching for the following sequence: A A - case sensitive comparison:
Sequence: A A A has been found at position: 3

Searching for the following sequence: A A - case insensitive comparison:
Sequence: A A a has been found at position: 2
*/