#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{"AAAA"};
    string_view sv1{s}; // C++17
    string_view sv2{s};
    cout << s << " " << sv1 << " " << sv2 << endl;
    s = "BBBB";
    cout << s << " " << sv1 << " " << sv2 << endl;

    return 0;
}

/*
AAAA AAAA AAAA
BBBB BBBB BBBB
*/