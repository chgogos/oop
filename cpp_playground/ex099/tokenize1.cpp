#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss("The quick brown fox");
    string s;

    while (getline(ss, s, ' '))
    {
        cout << s << endl;
    }
}

/*
The
quick
brown
fox
*/