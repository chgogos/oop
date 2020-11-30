#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{"ABCDEF"}; // γίνεται αντιγραφή του C-string στο string
    string_view sv1{s}; // C++17 (δεν γίνεται αντιγραφή)
    string_view sv2{s}; // C++17 (δεν γίνεται αντιγραφή)
    cout << s << " " << sv1 << " " << sv2 << endl;
    s[0]='*';
    cout << s << " " << sv1 << " " << sv2 << endl;
    return 0;
}

/*
ABCDEF ABCDEF
*BCDEF *BCDEF
*/