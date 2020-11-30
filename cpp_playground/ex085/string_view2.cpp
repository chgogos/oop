#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{"ABCDEF"}; // γίνεται αντιγραφή του C-string στο string
    string_view sv1{s}; // δεν γίνεται αντιγραφή του C-string στο string_view
    string_view sv2{s}; // δεν γίνεται αντιγραφή του C-string στο string_view
    cout << s << " " << sv1 << " " << sv2 << endl;
    s[0]='*';
    cout << s << " " << sv1 << " " << sv2 << endl;
    return 0;
}

/*
ABCDEF ABCDEF
*BCDEF *BCDEF
*/