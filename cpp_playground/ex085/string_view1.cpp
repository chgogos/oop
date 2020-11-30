#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    const char *s = "ABCDEF";
    char s2[10];
    strcpy(s2, s);
    string_view sv{s2}; // C++17 (δεν γίνεται αντιγραφή)
    cout << s << " " << s2 << " " << sv << endl;
    s2[0] = '*';
    cout << s << " " << s2 << " " << sv << endl;
    return 0;
}

/*
ABCDEF ABCDEF ABCDEF
ABCDEF *BCDEF *BCDEF
*/