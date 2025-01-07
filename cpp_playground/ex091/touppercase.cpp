#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    const vector<string> v{"hello", "hi", "hallo"};
    for (const string& s : v)  // Add & for reference
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