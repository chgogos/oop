// εύρεση του εαν υπάρχει λεκτικό που να περιέχει aaa στα λεκτικά ενός vector<string>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool contains_aaa(string s)
{
    return (s.find("aaa") != string::npos);
}

int main()
{
    vector<string> v{"aab", "bbab", "caacc", "xxxxaaax", "dddx"};

    // 1. χωρίς lambda
    // auto found = find_if(v.begin(), v.end(), contains_aaa);

    // 2. με lambda
    // auto found = find_if(v.begin(), v.end(), [](string s) { return (s.find("aaa") != string::npos); });

    // 3. με lambda που ανατίθεται σε μεταβλητή
    auto x{
        [](string s) { return (s.find("aaa") != string::npos); }};

    auto found = find_if(v.begin(), v.end(), x); // με lambda

    if (found == v.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found " << *found << " at position " << (found - v.begin()) << endl;
    }
}

/*
Found xxxxaaax at position 3
*/