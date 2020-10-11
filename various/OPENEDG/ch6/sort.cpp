#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctype.h>
#include <string>

using namespace std;

template <class T>
void print(const T &value)
{
    cout << value << " ";
}

char t(char c)
{
    return tolower(c);
}
string toLower(const string &v)
{
    string ret(v);
    transform(ret.begin(), ret.end(), ret.begin(), t);
    return ret;
}

bool descending_caseinsensitive(const string &a, const string &b)
{
    return toLower(b) < toLower(a);
}

bool descending_casesensitive(const string &a, const string &b)
{
    return b < a;
}

bool ascending_caseinsensitive(const string &a, const string &b)
{
    return toLower(a) < toLower(b);
}

int main()
{
    string t[] = {"AB", "dC", "ba", "aB", "BC", "bc", "BA", "cd", "Cd", "ab"};
    vector<string> v1(10);

    copy(t, t + 10, v1.begin());
    cout << "Source collection:\n";
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl;

    cout << "Sorting in ascending order:\n";
    cout << "Normal sort:\n";
    sort(v1.begin(), v1.end());
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl;
    cout << "Stable sort:\n";
    copy(t, t + 10, v1.begin());
    stable_sort(v1.begin(), v1.end(), ascending_caseinsensitive);
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl
         << endl;

    cout << "Sorting in descending order:\n";
    cout << "Normal sort:\n";
    sort(v1.begin(), v1.end(), descending_casesensitive);
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl;
    cout << "Stable sort:\n";
    copy(t, t + 10, v1.begin());
    stable_sort(v1.begin(), v1.end(), descending_caseinsensitive);
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl
         << endl;

    return 0;
}

/*
Source collection:
v1: AB dC ba aB BC bc BA cd Cd ab
Sorting in ascending order:
Normal sort:
v1: AB BA BC Cd aB ab ba bc cd dC
Stable sort:
v1: AB aB ab ba BA BC bc cd Cd dC

Sorting in descending order:
Normal sort:
v1: dC cd bc ba ab aB Cd BC BA AB
Stable sort:
v1: dC cd Cd BC bc ba BA AB aB ab 
*/