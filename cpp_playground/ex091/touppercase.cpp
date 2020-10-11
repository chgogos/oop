#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<string> v{"hello", "hi", "hallo"};
    for (string s : v)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
}

/*
HELLO
HI
HALLO
*/